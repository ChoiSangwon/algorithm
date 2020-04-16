#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int A=N;
    while(M>1){
        A*=--N;
        M--;
        cout<<A<<endl;
    }
    cout<<A<<endl;
}