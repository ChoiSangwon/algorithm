#include<iostream>
using namespace std;
int main(){
    int dp[31][31],R,C,W;
    cin>>R>>C>>W;
    for(int j=0;j<31;j++){
        for(int i=0;i<=j;i++){
            if(i==0||i==j)
                dp[j][i]=1;
            else{
                dp[j][i]=dp[j-1][i-1]+dp[j-1][i];
            }
            //cout<<dp[j][i]<<" ";
        }
        //cout<<endl;
    }
    int sum=0;
    for(int j=R-1;j<R+W-1;j++){
        for(int i=C-1;i<=j-R+C;i++){
            //cout<<dp[j][i]<<endl;
            sum+=dp[j][i];
        }
    }
    cout<<sum<<endl;

}