#include<iostream>
using namespace std;
#define MAX 34

int N;
long arr[MAX][MAX];
long long dp[MAX][MAX][3]={0,};  //제일 뒤에 0 가로 1 세로 2 대각선

long long solve(){
    dp[1][2][0]=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(i==1&j==1) continue;
            if(arr[i][j]==1) continue;

            if(arr[i][j+1]==0)
                dp[i][j+1][0]=dp[i][j][2]+dp[i][j][0];
            if(arr[i+1][j]==0)
                dp[i+1][j][1]=dp[i][j][2]+dp[i][j][1];
            if(i<N&&j<N&&arr[i][j+1]==0&&arr[i+1][j]==0&&arr[i+1][j+1]==0)
                dp[i+1][j+1][2]=dp[i][j][2]+dp[i][j][1]+dp[i][j][0];
            //cout<<<<endl;
        }
    }
    return dp[N][N][0]+dp[N][N][1]+dp[N][N][2];
}

int main(){
    cin>>N;
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin>>arr[i][j];
        }
    }
    long ans =solve();
    cout<<ans<<endl;
}
