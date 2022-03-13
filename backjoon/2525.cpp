#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    B+=C;
    if(B>=60){
        A+=B/60;
        B-=(B/60)*60;
    }
    if(A>=24)
        A-=24;
    cout<<A<<" "<<B<<endl;
}