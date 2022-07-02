#include<iostream>
#include<memory.h>
using namespace std;
#define MMAX 2001
#define NMAX 11
long long dp[NMAX][MMAX]={0,};
int N,M,T;


int main(){
    cin>>T;
    for(int j=0;j<MMAX;j++)
        dp[0][j]=1;
    for(int i=1;i<NMAX;i++){
        for(int j=1;j<MMAX;j++){
            dp[i][j]=dp[i][j-1]+dp[i-1][j/2];
        }
    }
    for(int i=0;i<11;i++){  //출력 확인.
        for(int j=0;j<21;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<T;i++){
        cin>>N>>M;
        cout<<dp[N][M]<<endl;
    }

}