#include<iostream>
#include<queue>
using namespace std;
#define MAX 101

int arr[MAX][MAX];
int check[MAX][MAX]={0,};
int dist[MAX][MAX]={0,};
int N,M,res=0,realres=0;
queue<pair<int,int> > q;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

void BFS(int x,int y){
    check[x][y]=1;
    q.push(make_pair(x,y));
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx = cx+dx[i];
            int ny = cy+dy[i];
            if(arr[nx][ny]==1&&check[nx][ny]==0&&nx>=0&&ny>=0&&nx<N&&ny<M){
                check[nx][ny]=1;
                res++;
                dist[nx][ny]=dist[cx][cy]+1;
                q.push(make_pair(nx,ny));
            }
        }
    }
}

int main(){
    char c;
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        getchar(); //개행문자 제거
        for(int j=0;j<M;j++){
            scanf("%c",&c);
            if(c=='1') arr[i][j]=1;
            else arr[i][j]=0;
        }
    }
    BFS(0,0);
    printf("%d\n",dist[N-1][M-1]+1);
}