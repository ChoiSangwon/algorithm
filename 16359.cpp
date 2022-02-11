#include<iostream>
using namespace std;
int main(){
    int dp[31][31],N,K;
    cin>>N>>K;
    for(int j=0;j<N;j++){
        for(int i=0;i<=j;i++){
            if(i==0||i==j)
                dp[j][i]=1;
            else{
                dp[j][i]=dp[j-1][i-1]+dp[j-1][i];
            }
            //cout<<dp[j][i]<<" ";
        }
        //cout<<endl;
    }
    cout<<dp[N-1][K-1]<<endl;
}