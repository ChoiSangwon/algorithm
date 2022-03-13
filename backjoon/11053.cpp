#include<iostream>
#include<cstdlib>
using namespace std;
int dp[1000001]={0,};
int main(){
    int A,N,Max,res=0;
    cin>>A;
    int arr[A+1];
    for(int i=1;i<=A;i++){
        cin>>N;
        arr[i]=N;
    }
    for(int i=1;i<=A;i++){
        Max=0;
        for(int j=1;j<arr[i];j++){
            if(dp[j]>Max)
                Max=dp[j];
        }
        dp[arr[i]]=max(Max+1,dp[arr[i]]);
    }
    Max=dp[arr[1]];
    for(int i=1;i<=A;i++){
        //cout<<dp[arr[i]]<<endl;
        if(dp[arr[i]]>Max)
            Max=dp[arr[i]];
    }
    cout<<Max<<endl;
}