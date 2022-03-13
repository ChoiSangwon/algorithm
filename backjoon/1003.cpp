#include<iostream>
using namespace std;
int fibonacci(int);
int dp0[41]={0,},dp1[41]={0,};

int main(){
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        dp0[0]=dp1[1]=1;
        dp0[1]=dp1[0]=0;
        for(int i=2;i<N+1;i++){
            dp0[i]=dp0[i-2]+dp0[i-1];
            dp1[i]=dp1[i-2]+dp1[i-1];
        }
        cout<<dp0[N]<<" "<<dp1[N]<<endl;
    }
}
/*
int fibonacci(int n) {
    if (n == 0) {
        dp[n]=dp[n]+1;
        //printf("0");
        //zero++;
        return 0;
    } else if (n == 1) {
        dp[n]=dp[n]+1;
        //printf("1");
        //one++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}*/