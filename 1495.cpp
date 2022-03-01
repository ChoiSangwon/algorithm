#include<iostream>
using namespace std;
int N,M,S,V[51],res=0,dp[51][1001]={0,};

/*
void DFS(int a, int I){
    cout<<"A : "<<a<<" i : "<<I<<endl;
    if(a>M)
        return;
    if(I==N&&a>=0&&a<=M)
        res=max(res,a);
    else if(I>N)
        return ;
    //dp[a]=max(dp[a],a);

    if(a-V[I]>=0&&I<N){
        DFS(a-V[I],I+1);
    }
    if(a+V[I]<=M&&I<N)
        DFS(a+V[I],I+1);
}
*/

int main(){
    cin>>N>>S>>M;
    for(int i=0;i<N;i++){
        cin>>V[i];
    }
    int AA=S;
    dp[0][S] = true; 
    for (int i = 1; i <= N; i++) { 
        for (int j = 0; j <= M; j++) { 
            if (!dp[i - 1][j]) { continue; } 
            if (j - V[i] >= 0) { 
                dp[i][j - V[i]] = true; 
            } 
            if (j + V[i] <= M) { 
                dp[i][j + V[i]] = true; 
            } 
        }
    }


    /*DFS(S,0);
    if(res==0)
        cout<<"-1"<<endl;
    else
        cout<<res<<endl;
    */
}