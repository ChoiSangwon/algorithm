#include<iostream>
using namespace std;
int main(){
    int A,B,C,D,x,y;
    cin>>A>>B>>C>>D;
    x=(A+B+C+D)/60;
    y=(A+B+C+D)%60;
    cout<<x<<endl<<y<<endl;
}