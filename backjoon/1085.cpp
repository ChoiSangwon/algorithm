#include<iostream>
using namespace std;
int main(){
    int x,y,w,h,a,b;
    cin>>x>>y>>w>>h;
    a=w-x;
    b=h-y;
    if(a<x&&a<b&&a<y)
        cout<<a<<endl;
    else if(x<b&&x<y)
        cout<<x<<endl;
    else if(b<y)
        cout<<b<<endl;
    else
        cout<<y<<endl;    
}