#include<iostream>
#include<queue>
#include<vector>
#include<memory.h>
using namespace std;

vector<pair<int, int> > virus, act_virus;
int N, M,abcd=0;
int res = 1000000000;
int map[51][51];
int arr[51][51]={0,};
queue<pair<int, int> > q;


void solve() {
	int dist[51][51]={0,};
	int Xarr[] = { 0, 0, -1, 1 };
	int Yarr[] = { 1, -1, 0, 0 };
	memset(dist, -1, sizeof(dist));

	for (int i = 0; i < act_virus.size(); i++) { // 조합을 큐에 넣음
		int x = act_virus[i].first;
		int y = act_virus[i].second;
		q.push(make_pair(x, y));
		dist[x][y] = 0;
	}

	int cnt = 0, tmp = 0;
	while (!q.empty()) { // 큐에 넣은 것을 큐가 빌때까지 탐색 
		
		int x = q.front().first;
		int y = q.front().second;
		q.pop(); 
        for (int i = 0; i < 4; i++) {
			int nx = x + Xarr[i];
			int ny = y + Yarr[i];
			if (nx < 0 || ny < 0 || nx >=  N|| ny >= N) continue;
			if (map[nx][ny] != 1 && dist[nx][ny] == -1) {
				q.push(make_pair(nx, ny));
				dist[nx][ny] = dist[x][y] + 1;
				cnt++;
				tmp = dist[nx][ny];
			}
		}
		
	}
	bool check=false;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
			if(map[i][j]!=1&&dist[i][j]==-1){
				check=true;
				break;
			}
        }
		if(check)
			break;
    }
	if(!check)
		res=min(res,tmp);
    
}

void Virus(int L, int cnt) { // 바이러스 올 수 있는 조합 구하기
	if (cnt == M) {
		solve();
		return;
	}
	else {
		for (int i = L; i < virus.size(); i++) {
			if (arr[virus[i].first][virus[i].second] == 0) {
				arr[virus[i].first][virus[i].second] = 1;
				act_virus.push_back(make_pair(virus[i].first, virus[i].second));
				Virus(i, cnt + 1);
				act_virus.pop_back();
				arr[virus[i].first][virus[i].second] = 0;
			}
		}
	}
}

int main() {
	cin>>N>>M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin>>map[i][j];
			if (map[i][j] == 2) virus.push_back(make_pair(i, j));
			//if(map[i][j]!=1)	abcd++;
		}
	}

	Virus(0, 0);

	if (res != 1000000000) 
        cout<<res<<endl;
	else 
        cout<<-1<<endl;

	return 0;
}
