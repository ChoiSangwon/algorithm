#include<iostream>
using namespace std;
int dp[100001]={0,};
bool ans=false;

int main(){
    int N, K;
    cin>>N>>K;
    for(int j=1;j<=100000;j++){
        for(int k=1;k<K;k++){
            dp[1]=j;
            dp[2]=k;
            for(int i=3;i<=N;i++){
                dp[i]=dp[i-1]+dp[i-2];
            }
            if(dp[N]==K){
                ans=true;
                break;   
            }  
        } 
        if(ans)
            break;
    }
    cout<<dp[1]<<endl<<dp[2]<<endl;
}