#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int arr[N+1],arr2[N+1];
    for(int a=1;a<N+1;a++){
        arr[a]=a;
        arr2[a]=a;
    }
    for(int a=0;a<M;a++){
        int i,j,k;
        cin>>i>>j>>k;
        int c=k;
        int d=i;
        while(c<=j){
            arr[d++]=arr2[c++];
        }
        while(d<=j){
            arr[d++]=arr2[i++];
        }
        for(int r=1;r<N+1;r++)
            arr2[r]=arr[r];
    }
    for(int a=1;a<N+1;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;
}