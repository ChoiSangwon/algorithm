#include<iostream>
using namespace std;
int main(){
    int N,arr[10001],dp[10001],j=1;
    cin>>N;
    for(int i=1;i<=N;i++){
        dp[i]=dp[i-1]+arr[i];
        if(j%3==0){
            if(dp[i]<dp[i-2]+arr[i]){
                dp[i]=dp[i-2]+arr[i];
                j=0;
            }
            else
        }
        j++;
    }
}