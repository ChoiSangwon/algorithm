#include<iostream>
using namespace std;
int main(){
    int N,F,i;
    cin>>N>>F;
    N/=100;
    N*=100;
    for(i=0;i<100;i++,N++){
        if(N%F==0)
            break;
    }
    if(i<10)
        cout<<0<<i<<endl;
    else
        cout<<i<<endl;
}