#include<iostream>
using namespace std;
int main(){
    int N,A,B,round=0,boo=0;
    cin>>N>>A>>B;
    while(N>1){
        round++;
        if((A%2==1&&B%2==0&&A+1==B)||(B%2==1&&A%2==0&&B+1==A)){
            boo++;
            break;
        }
        if(N%2==1)
            N++;
        if(A%2==1)
            A=A/2+1;
        else
            A/=2;
        if(B%2==1)
            B=B/2+1;
        else
            B/=2;
        N/=2;
    }
    if(boo==0)
        cout<<-1<<endl;
    else
        cout<<round<<endl;
    
}