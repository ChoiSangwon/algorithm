#include<iostream>
using namespace std;
int N,M,arr[102][102],visited[102][102]={0,},count1,sum1=0,sum2=0;


void DFS(int a,int b,int c){
    visited[a][b]=1;
    count1++;
    if(a>0&&visited[a-1][b]==0&&arr[a-1][b]==c)
        DFS(a-1,b,c);
    if(b>0&&visited[a][b-1]==0&&arr[a][b-1]==c)
        DFS(a,b-1,c);
    if(a<M-1&&visited[a+1][b]==0&&arr[a+1][b]==c)
        DFS(a+1,b,c);
    if(b<N-1&&visited[a][b+1]==0&&arr[a][b+1]==c){
        DFS(a,b+1,c);
    }
}


int main(){
    cin>>N>>M;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            char ab;
            cin>>ab;
            if(ab=='W')
                arr[i][j]=1;
            else
                arr[i][j]=2;
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            count1=0;
            if(visited[i][j]==0){
                DFS(i,j,arr[i][j]);
                if(arr[i][j]==1)
                    sum1+=count1*count1;
                else
                    sum2+=count1*count1;
            }
        }
    }
    cout<<sum1<<" "<<sum2<<endl;
}