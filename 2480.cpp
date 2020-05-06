#include<iostream>
using namespace std;
int main(){
    int a,b,c,result;
    cin>>a>>b>>c;
    if(a==b&&a==c)
        result=10000+a*1000;
    else if(a==b||a==c)
        result=1000+a*100;
    else if(b==c)
        result=1000+b*100;
    else{
        if(a>b&&a>c)
            result=a*100;
        else if(b>c)
            result=b*100;
        else
            result=c*100;
    }
    cout<<result<<endl;
}