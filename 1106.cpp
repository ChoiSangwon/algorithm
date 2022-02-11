#include<iostream>
#include<cstdlib>
using namespace std;
#define MAX 100000

int main(){
    int C,N;
    cin>>C>>N;
    int cilent[N+1],price[N+1],count,dp[MAX+1]={0,};
    for(int i=1;i<N+1;i++) cin>>price[i]>>cilent[i];
    for(int i=1;i<=N;i++){
        for(int j=price[i];j<=MAX;j++){
            dp[j]=max(dp[j],dp[j-price[i]]+cilent[i]);
        }
    }
    for(int i=1;i<=MAX;i++){
        if (dp[i]>=C){
            cout<<i<<endl;
            break;
        }
    }
    /*
    for(int i=1;i<MAX;i++){
        for(int j=1;j<N+1;j++){
            if(i%cilent[j]==0&&dp[i]==0){
                dp[i]=price[j]+dp[i-cilent[j]];
            }
            else if(i%cilent[j]==0){
                dp[i]=min(dp[i],dp[i-cilent[j]]+price[j]);
            }
            //cout<<i<<" "<<j<<" "<<dp[i]<<endl;
        }
        if(dp[i]==0)
            dp[i]=dp[i-1];
    }
    int min=dp[C];
    for(int i=C+1;i<MAX;i++){
        if(dp[i]<min) min=dp[i];
    }
    cout<<min<<endl;*/
}