#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int N,count=0,dp[1001]={0,};
    cin>>N;
    for(int i=1;i<=N;i++){
        dp[i]=dp[i-1]+1;
        if(i%3==0)
            dp[i]=max(dp[i],dp[i-3]+1);
        if(i%4==0){
            dp[i]=max(dp[i],dp[i-4]+1);
            cout<<"i : "<<i<<endl;
        }
        cout<<dp[i]<<endl;
    }
    if(dp[N]%2==0)
        cout<<"CY"<<endl;
    else
        cout<<"SK"<<endl;
}