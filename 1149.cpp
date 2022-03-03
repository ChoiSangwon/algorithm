#include<iostream>
using namespace std;
int arr[1001][3],dp[1001][3]={0,},sum[3];
int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=0;j<3;j++)
            cin>>arr[i][j];
    }
    
    for(int i=1;i<=N;i++){
        for(int j=0;j<3;j++){
            if(j==0)
                dp[i][j]=min(dp[i-1][1],dp[i-1][2])+arr[i][j];
            else if(j==1)
                dp[i][j]=min(dp[i-1][0],dp[i-1][2])+arr[i][j];
            else if(j==2)
                dp[i][j]=min(dp[i-1][1],dp[i-1][0])+arr[i][j];
        }
    }
    int a=min(dp[N][0],min(dp[N][1],dp[N][2]));
    std::cout<<a<<endl;
}