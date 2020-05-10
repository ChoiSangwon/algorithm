#include<iostream>
using namespace std;
int main(){
    int L,A,B,C,D;
    cin>>L>>A>>B>>C>>D;
    if((A/C)>(B/D)){
        L-=A/C;
        if(A%C!=0)
            L--;
    }
    else{
        L-=B/D;
        if(B%D!=0)
            L--;
    }
    cout<<L<<endl;
}