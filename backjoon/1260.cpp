#include<iostream>
#include<queue>
using namespace std;
int N,M,V,arr[1001][1001]={0,},visited[1001]={0,},visited2[1001]={0,};
queue <int> qwe;

void DFS(int a){
    cout<<a<<" ";
    visited[a]=1;
    for(int i=1;i<=N;i++){
        if(arr[a][i]==1&&visited[i]==0){
            DFS(i);
        }
    }
}

void BFS(int a){
    visited2[a]=1;
    qwe.push(a);
    while(!qwe.empty()){
        a=qwe.front();
        cout<<a<<" ";
        qwe.pop();
        for(int i=1;i<=N;i++){
            if(arr[a][i]==1&&visited2[i]==0){
                qwe.push(i);
                visited2[i]=1;
            }
        }
    }
}


int main(){
    cin>>N>>M>>V;
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;
    }
    DFS(V);
    cout<<endl;
    BFS(V);
}