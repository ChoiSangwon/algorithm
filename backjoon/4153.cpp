#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    while(1){
        cin>>A>>B>>C;
        if(A==0&&B==0&&C==0)
            break;
        if(A>B&&A>C){
            if(A*A==B*B+C*C)
                cout<<"right"<<endl;
            else
                cout<<"wrong"<<endl;
        }
        else if(B>A&&B>C){
            if(B*B==A*A+C*C)
                cout<<"right"<<endl;
            else
                cout<<"wrong"<<endl;
        }
        else if(C>A&&C>B){
            if(C*C==A*A+B*B)
                cout<<"right"<<endl;
            else
                cout<<"wrong"<<endl;
        }
    }
}