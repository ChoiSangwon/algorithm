#include<iostream>
using namespace std;
int N,K,dp[101][100001]={0,};
pair<int,int> ar[101];

int compare(const void * a,const void *b){
    pair<int,int> num1=*(pair<int,int>*)a;
    pair<int,int> num2=*(pair<int,int>*)b;
    if(num1.first>num2.first)
        return 1;
    else if(num1.first<num2.first)
        return -1;
    else
        return 0;
}


int main(){
    cin>>N>>K;
    for(int i=1;i<=N;i++){
        int V,W;
        cin>>V>>W;
        ar[i]=make_pair(V,W);
    }
    qsort(ar+1,N,sizeof(pair<int,int>),compare);


    for(int i=1;i<=N;i++){
        for(int j=1;j<=K;j++){
            if(ar[i].first>j)
                dp[i][j]=dp[i-1][j];
            else{
                dp[i][j]=max(dp[i-1][j-ar[i].first]+ar[i].second,dp[i-1][j]);
                //cout<<"a"<<endl;
            }
        }
    }
    
    /*for(int i=0;i<=N;i++){
        for(int j=0;j<=K;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/

    cout<<dp[N][K]<<endl;
}