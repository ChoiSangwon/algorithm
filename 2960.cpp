#include<iostream>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;
    int arr[N];
    for(int i=2;i<=N;i++)
        arr[i]=i;
    int count=0,sp=2,j;
    while(1){
        for(j=sp;j<=N;j+=sp){
            if(arr[j]==0)
                continue;
            arr[j]=0;
            count++;
            if(count==K)
                break;
        }
        if(count==K)
            break;
        for(int i=2;i<=N;i++){
            if(arr[i]!=0){
                sp=arr[i];
                break;
            }
        }
    }
    cout<<j<<endl;
}