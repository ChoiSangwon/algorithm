#include<iostream>
using namespace std;
int main(){
    int N,M,K;
    cin>>N>>M;
    int arr[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            cin>>arr[i][j];
    }
    cin>>K;
    for(int q=0;q<K;q++){
        int sum=0,i,j,x,y;
        cin>>i>>j>>x>>y;
        for(int ii=i-1;ii<x;ii++){
            for(int jj=j-1;jj<y;jj++)
                sum+=arr[ii][jj];
        }
        cout<<sum<<endl;
    }
}