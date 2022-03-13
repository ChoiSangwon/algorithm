#include<iostream>
using namespace std;
int main(){
    int N,M,i,j,k,arr[101]={0,};
    cin>>N>>M;
    for(int a=0;a<M;a++){
        cin>>i>>j>>k;
        for(int b=i;b<=j;b++)
            arr[b]=k;
    }
    for(int i=1;i<N+1;i++)
        cout<<arr[i]<<" ";
}