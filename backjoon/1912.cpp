#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int N,a,high;
    cin>>N;
    int arr[100001]={0,},dp[100001]={0,},sum=0;
    for(int i=1;i<=N;i++){
        cin>>a;
        arr[i]=a;
    }
    dp[1]=arr[1];
    for(int i=1;i<=N;i++){
        dp[i]=max(dp[i-1]+arr[i],arr[i]);
        sum=max(dp[i],sum);
    }
    cout<<sum<<endl;
}