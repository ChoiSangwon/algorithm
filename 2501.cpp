#include<iostream>
using namespace std;
int main(){
    int N,K,count=0,i;
    cin>>N>>K;
    for(i=1;i<=N;i++){
        if(N%i==0)
            count++;
        if(count==K)
            break;
    }
    if(count==K)
        cout<<i<<endl;
    else
        cout<<0<<endl;
}