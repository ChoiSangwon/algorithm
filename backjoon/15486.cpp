#include<iostream>
using namespace std;
pair<int,int> arr[1500001]={make_pair(0,0),};
int dp[1500001]={0,};

int main(){
    int N,curmax=0;
    cin>>N;
    for(int i=1;i<=N;i++){
        int a,b;
        cin>>a>>b;
        arr[i]=make_pair(a,b);
    }
    for(int i=1;i<=N+1;i++){
        curmax=max(curmax,dp[i]);
        if(dp[i]==0)
            dp[i]=dp[i-1];
        if(arr[i].first+i<=N+1){
            dp[arr[i].first+i]=max(dp[arr[i].first+i],arr[i].second+curmax);
        }
        
    }

    cout<<curmax<<endl;
    //cout<<arr[100].first<<" "<<arr[100].second<<endl;
}