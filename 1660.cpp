#include<iostream>
using namespace std;
int main(){
    int N,i=1,a=0,sum=0,arr[122],dp[300002];
    cin>>N;
    while(1){
        a+=i;
        sum+=a;
        arr[i]=sum;
        if(sum==N){
            break;
        }
        else if(sum>N){
            i--;
            break;
        }
        i++;
    }
    for(int c=1;c<=N;c++){
        dp[c]=c;
    }
    for(int c=1;c<=i;c++){
        dp[arr[a]]=1;
    }
    for(int c=1;c<=i;c++){
        for(int b=arr[c];b<=N;b++){
            dp[b]=min(dp[b],dp[b-arr[c]]+1);
        }
    }
    for(int c=1;c<=i;i++){
        cout<<arr[i]<<endl;
    }
    //cout<<dp[N]<<endl;
}