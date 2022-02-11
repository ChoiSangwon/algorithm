#include<iostream>
#include<vector>
using namespace std;
int visited[100001]={0,},dp[100001]={0,};
vector<vector<int>> arr;


int dfs(int a){
    if(dp[a]!=0) return dp[a];
    visited[a]=1;
    int res=1;
    for(int i=0;i<arr[a].size();i++){
        //cout<<"A : "<<a<<endl;
        if(visited[arr[a][i]]==1)
            continue;
        res+=dfs(arr[a][i]);
        //cout<<res<<endl;
    }
    dp[a]=res;
    return dp[a];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N,R,Q,res=0,U,V;
    cin>>N>>R>>Q;
    arr.resize(N+1);

    for(int i=0;i<N-1;i++){
        cin>>U>>V;
        arr[U].push_back(V);
        arr[V].push_back(U);
    }
    dp[R]=dfs(R);
    for(int i=0;i<Q;i++){
        int B;
        cin>>B;
        cout<<dp[B]<<endl;
    }
}