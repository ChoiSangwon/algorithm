#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3,a4,b1,b2,b3,b4,result1,result2,result3;
    cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
    result1=b1;
    result2=b1+b2-a2;
    result3=result2+b3-a3;
    if(result1>result2&&result1>result3)
        cout<<result1<<endl;
    else if(result2>result3)
        cout<<result2<<endl;
    else
        cout<<result3<<endl;
}