#include<iostream>
using namespace std;
int Rev(int x){
    int y=0,i=1,c;
    c=x;
    while(x>0){
        i*=10;
        x/=10;
    }
    i/=10;
    while(c>0){
        y+=(c%10)*i;
        i/=10;
        c/=10;
    }
    return y;
}
int main(){
    int X,Y,result;
    cin>>X>>Y;
    result=Rev(Rev(X)+Rev(Y));
    cout<<result<<endl;
}