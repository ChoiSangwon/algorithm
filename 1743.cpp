#include<iostream>
using namespace std;
int N,M,K,arr[101][101]={0,},visited[101][101]={0,},max1=0,size1;

void DFS(int i,int j){
    visited[i][j]=1;
    size1++;
    if(i>1&&visited[i-1][j]==0&&arr[i-1][j]==1)
        DFS(i-1,j);

    if(j>1&&visited[i][j-1]==0&&arr[i][j-1]==1)
        DFS(i,j-1);

    if(i<N&&visited[i+1][j]==0&&arr[i+1][j]==1)
        DFS(i+1,j);

    if(j<M&&visited[i][j+1]==0&&arr[i][j+1]==1)
        DFS(i,j+1);

 
    if(size1>max1)
        max1=size1;
    return;
}

int main(){
    cin>>N>>M>>K;
    for(int i=1;i<=K;i++){
        int r,c;
        cin>>r>>c;
        arr[r][c]=1;
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            if(visited[i][j]!=1&&arr[i][j]==1){
                size1=0;
                DFS(i,j);
            }
        }
    }
    cout<<max1<<endl;
    /*for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
}