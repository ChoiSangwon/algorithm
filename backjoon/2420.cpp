#include<iostream>
using namespace std;
int main(){
    long long N,M;
    cin>>N>>M;
    cout<<((N>M)?N-M:M-N)<<endl;
}