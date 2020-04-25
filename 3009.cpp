#include<iostream>
using namespace std;
int main(){
    int N1,N2,N3,N4,N5,N6,a,b;
    cin>>N1>>N2>>N3>>N4>>N5>>N6;
    if(N1==N3)
        a=N5;
    else if(N1==N5)
        a=N3;
    else
        a=N1;
    if(N2==N4)
        b=N6;
    else if(N2==N6)
        b=N4;
    else
        b=N2;
    cout<<a<<" "<<b<<endl;
}