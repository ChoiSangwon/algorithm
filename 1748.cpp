#include<iostream>
using namespace std;
int main(){
    int N,count=0,a=9,i=1,c,d=1;
    cin>>N;
    c=N;
    while(N>=10){
        count+=a*(i++);
        a*=10;
        N/=10;
    }
    for(int j=1;j<i;j++)
        d*=10;
    c-=d;
    count+=(c+1)*i;
    cout<<count<<'\n';
}