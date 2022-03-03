#include<iostream>
using namespace std;
int arr[21]={0,},N,S,res=0,sum=0;

void DFS(int a){
    sum+=arr[a];
    if(a<=0)
        return;
    if(sum==S)
        res++;
    else if(sum-arr[a]==S)
        res++;
    for(int i=1;i<=a;i++)
        DFS(a-i);
    sum-=arr[a];
}



int main(){
    cin>>N>>S;
    for(int i=1;i<=N;i++)
        cin>>arr[i];
    DFS(N);
    cout<<res<<endl;
    
}