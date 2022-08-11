#include<iostream>
using namespace std;
int arr[1001][1001];
int dp[1001][1001]={0,};
int res[10001][4];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int R,C,Q,sum=0;
    cin>>R>>C>>Q;
    for (int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            cin>>arr[i][j];
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+arr[i][j];
        }
    }
    for(int i=1;i<=Q;i++){
        int r1,c1,r2,c2,a=0;
        cin>>r1>>c1>>r2>>c2;
        a=dp[r2][c2]-dp[r1-1][c2]-dp[r2][c1-1]+dp[r1-1][c1-1];
        cout<<a/((r2-r1+1)*(c2-c1+1))<<endl;
    }
}