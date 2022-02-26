#include<iostream>
using namespace std;
int count=0,arr[1001][1001]={0,},dp[1001][1001]={0,};

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N,M;
    cin>>N>>M;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            if(i==1&&j==1){
                dp[i][j]=arr[i][j];
            }
            else if(i==1){
                dp[i][j]=dp[i][j-1]+arr[i][j];
            }
            else if(j==1){
                dp[i][j]=dp[i-1][j]+arr[i][j];
            }
            else{
                int a=max(dp[i-1][j],dp[i][j-1]);
                dp[i][j]=max(a,dp[i-1][j-1])+arr[i][j];
            }
        }
    }
    cout<<dp[N][M]<<endl;
}