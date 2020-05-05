#include<iostream>
using namespace std;
int main(){
    int N,sum=0,a;
    cin>>N;
    for(int i=0;i<N-1;i++){
        cin>>a;
        sum+=a-1;
    }
    cin>>a;
    sum+=a;
    cout<<sum<<endl;
}