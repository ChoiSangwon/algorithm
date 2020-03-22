#include<iostream>
using namespace std;
int main(){
    int A,B,AA=0,BB=0;
    cin>>A>>B;
    for(int i=0;i<3;i++){
        AA*=10;
        BB*=10;
        AA+=A%10;
        BB+=B%10;
        A/=10;
        B/=10;
    }
    if(AA>BB)
        cout<<AA<<endl;
    else
        cout<<BB<<endl;
}