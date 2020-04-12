#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    if(A+B+C!=180)
        cout<<"Error"<<endl;
    else if(A==B&&B==C&&A==C)
        cout<<"Equilateral"<<endl;
    else if(A==B||B==C||C==A)
        cout<<"Isosceles"<<endl;
    else{
        cout<<"Scalene"<<endl;
    }
}