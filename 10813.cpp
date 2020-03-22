#include<iostream>
using namespace std;
int main(){
    int N,M,temp,arr[101]={0,},i,j;
    cin>>N>>M;
    for(int i=1;i<N+1;i++)
        arr[i]=i;
    for(int a=0;a<M;a++){
        cin>>i>>j;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=1;i<N+1;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}