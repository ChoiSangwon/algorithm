// #include<iostream>
// using namespace std;
// #define MAX 34

// int N;
// long arr[MAX][MAX];
// long long dp[MAX][MAX][3]={0,};  //제일 뒤에 0 가로 1 세로 2 대각선

// long long solve(){
//     dp[1][2][0]=1;
//     for(int i=1;i<=N;i++){
//         for(int j=1;j<=N;j++){
//             if(i==1&j==1) continue;
//             if(arr[i][j]==1) continue;

//             if(arr[i][j+1]==0)
//                 dp[i][j+1][0]=dp[i][j][2]+dp[i][j][0];
//             if(arr[i+1][j]==0)
//                 dp[i+1][j][1]=dp[i][j][2]+dp[i][j][1];
//             if(i<N&&j<N&&arr[i][j+1]==0&&arr[i+1][j]==0&&arr[i+1][j+1]==0)
//                 dp[i+1][j+1][2]=dp[i][j][2]+dp[i][j][1]+dp[i][j][0];
//             //cout<<<<endl;
//         }
//     }
//     return dp[N][N][0]+dp[N][N][1]+dp[N][N][2];
// }

// int main(){
//     cin>>N;
    
//     for(int i=1;i<=N;i++){
//         for(int j=1;j<=N;j++){
//             cin>>arr[i][j];
//         }
//     }
//     long ans =solve();
//     cout<<ans<<endl;
// }
#include <stdio.h>

using namespace std;

int main(){
    int n;
    int home[33][33];
    long long dp[33][33][3]={0,};

    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &home[i][j]);
        }
    }

    dp[0][1][0] = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(home[i][j+1] == 0){
                dp[i][j+1][0] += dp[i][j][0] + dp[i][j][2]; 
            }
            if(home[i+1][j] == 0){
                dp[i+1][j][1] += dp[i][j][1] + dp[i][j][2];
            }
            if(i<n-1&&j<n-1&&home[i][j+1] == 0 && home[i+1][j] == 0 && home[i+1][j+1] == 0){
                dp[i+1][j+1][2] += dp[i][j][0] + dp[i][j][1] + dp[i][j][2];
            }
        }
    }

    long long ans = dp[n-1][n-1][0]+dp[n-1][n-1][1]+dp[n-1][n-1][2];

    printf("%lld", ans);
}