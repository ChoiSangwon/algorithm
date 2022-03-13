#include<iostream>
using namespace std;
int arr[17][17]={0,},dp[17][17]={0,};

int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++)
            cin>>arr[i][j];
    }
    for(int i=1;i<=N;i++){
        for(int j=2;j<=N;j++){
            if(i==1){
                dp[i][j]=dp[i][j-1];
            }
            else if(j==2){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1]+dp[i][j-1];
            }
        }
    }
    cout<<dp[N][N]<<endl;

}