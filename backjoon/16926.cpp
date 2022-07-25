#include <iostream>
#include <algorithm>


using namespace std;

int map[301][301];
int N,M,R;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

void solve(int box){
    for(int i=0; i<box; i++){   
        int first = map[i][i];       
        int x = i;
        int y = i;
        int k = 0;
        while(k<4){
            int nx = x + dx[k];     
            int ny = y + dy[k];
            if(nx==i && ny==i) break;
            if(i<=nx && nx<N-i && i<=ny && ny<M-i){
                map[x][y] = map[nx][ny];
                x = nx;
                y = ny;
            }
            else{       
                k++;
            }
        }
        map[i+1][i] = first; 
    }
}


int main(){
    cin >> N >> M >> R;
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cin >> map[i][j];
        }
    }
    int box = min(N,M)/2;      
    for(int i = 0; i<R; i++){      
        solve(box);
    }
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cout <<map[i][j]<< " ";
        }
        cout <<"\n";
    }
}