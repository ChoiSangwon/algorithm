#include<iostream>
using namespace std;
int T,K,M,N;
int arr[51][51]={0,},visited[51][51]={0,};
int res;

void DFS(int a,int b){
    visited[a][b]=1;
    if(a>0&&visited[a-1][b]==0&&arr[a-1][b]==1)
        DFS(a-1,b);
    if(b>0&&visited[a][b-1]==0&&arr[a][b-1]==1)
        DFS(a,b-1);

    if(a<N-1&&visited[a+1][b]==0&&arr[a+1][b]==1)
        DFS(a+1,b);

    if(b<M&&visited[a][b+1]==0&&arr[a][b+1]==1)
        DFS(a,b+1);

}

int main(){
    cin>>T;
    for(int i=0;i<T;i++){
        res=0;
        cin>>M>>N>>K;
        for(int j=0;j<K;j++){
            int a,b;
            cin>>a>>b;
            arr[b][a]=1;
        }
        for(int j=0;j<N;j++){
            for(int k=0;k<M;k++){
                if(arr[j][k]==1&&visited[j][k]==0){
                    DFS(j,k);
                    res++;
                }
            }
        }
        cout<<res<<endl;
        
        for(int j=0;j<N;j++){
            for(int k=0;k<M;k++){
                arr[j][k]=0;
                visited[j][k]=0;
            }
        }
    }
}

