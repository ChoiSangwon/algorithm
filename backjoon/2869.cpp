#include<iostream>
using namespace std;
int main(){
    int A,B,V,count=0,result;
    cin>>A>>B>>V;
    if(V%(A-B)==0)
        count=V/(A-B);
    else
        count=V/(A-B)+1;
    cout<<count<<endl;
    if(V<=((count-1)*(A-B))+A)
        cout<<count-1<<endl;
    else
        cout<<count<<endl;
}