#include<iostream>
using namespace std;
int main(){
    int N,K=1,count=0;
    cin>>N;
    while(N>0){
        if(K>N){
            K=1;
            continue;
        }
        N-=K++;
        count++;
    }
    cout<<count<<endl;
}