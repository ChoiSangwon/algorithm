#include<iostream>
#include<queue>
using namespace std;
int visited[51]={0,},N,count1,res=0;
char arr[51][51];

void BFS(int a,int b){
    //cout<<b<<" ";
    visited[b]=1;
    for(int i=1;i<=N;i++){
        if(i==a)
            continue;
        if(arr[b][i]=='Y'&&visited[i]==0){
            visited[i]=1;
            count1++;
            //cout<<i<<" ";
        }
    }
}

int main(){
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=N;i++){
        count1=0;
        queue <int> v;
        for(int j=1;j<=N;j++){
            if(arr[i][j]=='Y'&&visited[j]==0){
                visited[j]=1;
                count1++;
                v.push(j);
            }
        }
        int len=v.size();
        for(int j=0;j<len;j++){
            BFS(i,v.front());
            v.pop();
        }
        //cout<<endl;
        for(int j=1;j<=N;j++)
            visited[j]=0;
        res=max(res,count1);
    }
    cout<<res<<endl;
}