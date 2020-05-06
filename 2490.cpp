#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<3;i++){
        int a,b,c,d,result;
        cin>>a>>b>>c>>d;
        result=a+b+c+d;
        if(result==0)
            cout<<'D'<<endl;
        else if(result==1)
            cout<<'C'<<endl;
        else if(result==2)
            cout<<'B'<<endl;
        else if(result==3)
            cout<<'A'<<endl;
        else if(result==4)
            cout<<'E'<<endl;
    }
}