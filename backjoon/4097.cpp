#include<iostream>
using namespace std;
int dp[250001]={0,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(1){
        int N,a;
        cin>>N;
        if(N==0)
            break;
        for(int i=1;i<=N;i++){
            cin>>a;
            dp[i]=max(dp[i-1]+a,a);
        }
        int res=dp[1];
        for(int i=1;i<=N;i++){
            if(res<dp[i])
                res=dp[i];
        }
        cout<<res<<endl;
    }

}