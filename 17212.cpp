#include<iostream>
using namespace std;
int main(){
    int N,dp[100001]={0,};
    cin>>N;
    for(int i=1;i<=N;i++){
        dp[i]=dp[i-1]+1;
        if(i>=2)
            dp[i]=min(dp[i],dp[i-2]+1);
        if(i>=5)
            dp[i]=min(dp[i],dp[i-5]+1);
        if(i>=7)
            dp[i]=min(dp[i],dp[i-7]+1);
        //cout<<dp[i]<<endl;
    }
    cout<<dp[N]<<endl;
}