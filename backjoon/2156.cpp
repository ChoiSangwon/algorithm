#include<iostream>
using namespace std;
int main(){
    int N,arr[10001],dp[10001]={0,},j=1;
    cin>>N;
    for(int i=1;i<=N;i++)
        cin>>arr[i];
    dp[1]=arr[1];
    dp[2]=arr[1]+arr[2];
    dp[2]=max(dp[2],arr[0]+arr[1]);
    for(int i=3;i<=N;i++){
        dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
        dp[i]=max(dp[i],dp[i-3]+arr[i-1]+arr[i]);
    }
    cout<<dp[N]<<endl;
}