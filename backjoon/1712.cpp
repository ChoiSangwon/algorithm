#include<iostream>
using namespace std;
int main(){
    int A,B,C,i;
    cin>>A>>B>>C;
    if(C<=B)
        cout<<-1<<endl;
    else
        cout<<A/(C-B)+1<<endl;
}