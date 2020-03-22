#include<iostream>
using namespace std;

int main(){
    int N,L;
    cin>>N>>L;
    int arr[N],D[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
        D[i]=arr[i];
        for(int j=(i-L+1)>0?i-L+1:0;j<i;j++){
            if(D[i]>arr[j])
                D[i]=arr[j];
        }
        cout<<D[i]<<" ";
    }
}