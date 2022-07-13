#include <iostream>
#include <vector>
#define MAX 500001
using namespace std;

vector<int> arr[MAX];
int visit[MAX] = {
    0,
};
int N;
double W;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(11);

    int a, b;
    cin >> N >> W;
    for (int i = 1; i < N; i++)
    {
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    if (N == 1)
    {
        cout << W << endl;
    }
    else
    {
        int countLeaf = 0;
        for (int i = 2; i <= N; i++)
        {
            if (arr[i].size() == 1)
                countLeaf++;
        }
        cout << W / countLeaf << endl;
    }
}