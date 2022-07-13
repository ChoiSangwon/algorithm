#include <iostream>
#include <vector>
#include <queue>
#define MAX 500
using namespace std;
int N;
int res[20][20] = {
    0,
};
int visit[20][20] = {
    0,
};
int ax[4] = {0, 0, 1, -1};
int ay[4] = {1, -1, 0, 0};
vector<int> arr[MAX];
queue<int> list;

int main()
{
    cin >> N;
    int fav[4], a;
    for (int i = 0; i < N * N; i++)
    {
        cin >> a;
        list.push(a);
        for (int j = 0; j < 4; j++)
        {
            cin >> fav[j];
            arr[a].push_back(fav[j]);
        }
    }
    int ci, cj, bi = 0, bj = 0, maxcount = 0;
    while (!list.empty())
    {
        maxcount = 0;
        a = list.front();
        list.pop();
        int prob1[20][20] = {
            0,
        };
        for (int i = 0; i < N; i++)
        { // 1번 조건
            for (int j = 0; j < N; j++)
            {
                int count1 = 0; //인접해 있는 좋아하는 사람 수 카운트
                if (res[i][j] != 0)
                { // 비어있는 칸이 아니면 통과
                    continue;
                }
                for (int k = 0; k < 4; k++)
                {
                    int ci, cj;
                    ci = i + ax[k];
                    cj = j + ay[k];
                    if (ci < 0 || cj < 0 || ci > N || cj > N) //벗어나는 구역 예외처리
                        continue;
                    int cres = res[ci][cj];
                    for (int q = 0; q < arr[a].size(); q++)
                    {
                        if (arr[a][q] == cres)
                            count1++;
                    }
                }
                prob1[i][j] = count1;
                maxcount = max(maxcount, count1);
            }
        }
        queue<pair<int, int>> queueProb2; // 1
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (maxcount == prob1[i][j] && res[i][j] == 0)
                {
                    queueProb2.push(make_pair(i, j));
                }
            }
        }
        if (queueProb2.size() == 1)
        { // 1번 조건 확인 후 만족 못하면 2번으로 넘어감. 만족하면 그 칸에 값 넣고 다시 while문 맨위로
            int ra, rb;
            ra = queueProb2.front().first;
            rb = queueProb2.front().second;
            queueProb2.pop();
            res[ra][rb] = a;
            continue;
        }
        // 2번 조건 시작
        int countProb2 = 0, maxcountProb2 = 0;
        int prob2[20][20] = {
            0,
        };
        queue<pair<int, int>> queueProb3;
        while (!queueProb2.empty())
        {
            countProb2 = 0;
            int ci, cj;
            for (int k = 0; k < 4; k++)
            {
                ci = queueProb2.front().first + ax[k];
                cj = queueProb2.front().second + ay[k];
                if (ci < 0 || cj < 0 || ci > N - 1 || cj > N - 1) //벗어나는 구역 예외처리
                    continue;
                if (res[ci][cj] == 0)
                    countProb2++;
            }
            prob2[queueProb2.front().first][queueProb2.front().second] = countProb2;
            maxcountProb2 = max(maxcountProb2, countProb2);
            queueProb3.push(queueProb2.front());
            queueProb2.pop();
        }
        queue<pair<int, int>> queueRes;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (res[i][j] == 0 & maxcountProb2 == prob2[i][j])
                    queueRes.push(make_pair(i, j));
            }
        }

        res[queueRes.front().first][queueRes.front().second] = a;
    }
    int realres = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int countres = 0;
            for (int k = 0; k < 4; k++)
            {
                ci = i + ax[k];
                cj = j + ay[k];
                if (ci < 0 || cj < 0 || ci > N - 1 || cj > N - 1) //벗어나는 구역 예외처리
                    continue;
                for (int q = 0; q < arr[res[i][j]].size(); q++)
                {
                    if (arr[res[i][j]][q] == res[ci][cj])
                        countres++;
                }
            }
            if (countres == 1)
                realres++;
            else if (countres == 2)
                realres += 10;
            else if (countres == 3)
                realres += 100;
            else if (countres == 4)
                realres += 1000;
        }
    }
    cout << realres << endl;
}