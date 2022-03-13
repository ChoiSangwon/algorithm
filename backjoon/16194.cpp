#include<iostream>
using namespace std;
int main(){
    int N,arr[1001]={0,},dp[1001]={0,};
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=N;i++){
        dp[i]=dp[i-1]+arr[1];
        for(int j=2;j<=i;j++){
            dp[i]=min(dp[i],dp[i-j]+arr[j]);
        }
        //cout<<dp[i]<<endl;
    }
    cout<<dp[N]<<endl;
}