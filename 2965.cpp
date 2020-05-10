#include<iostream>
using namespace std;
int main(){
    int A,B,C,count=0;
    cin>>A>>B>>C;
    while(1){
        if(B==A||A==C||C==B)
            break;
        if(B-A>C-B){
            int a=(B-A)/2+A;
            C=B;
            B=a;
        }
        else{
            int a=(C-B)/2+B;
            A=B;
            B=a;
        }
        count++;
    }
    cout<<count<<endl;
}