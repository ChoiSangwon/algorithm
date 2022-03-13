#include<iostream>
#include<queue>
using namespace std;
int dp[1001]={0,},visited[1001]={0,},S,count1=0;
bool ans=false;
queue <pair<int,int>> v;


void BFS(int a,int cc){
    visited[a]=1;
    if(a==S){
        count1=cc;
        ans= true;
        return;
    }
    if(ans||a==0)
        return;
    if(visited[a*2]==0){
        cc+=2;
        v.push(make_pair(a*2,cc));
    }
    if(visited[a-1]==0){
        v.push(make_pair(a-1,cc));
    }
    BFS(v.front().first,v.front().second);
    v.pop();
}


int main(){
    cin>>S;
    BFS(1,0);
    cout<<count1<<endl;
}