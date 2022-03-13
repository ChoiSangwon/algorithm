#include<iostream>
using namespace std;
int main(){
    int N,na,count=0;
    cin>>N;
    na=1000-N;

    count+=na/500;
    na-=500*(na/500);
    count+=na/100;
    na-=100*(na/100);
    count+=na/50;
    na-=50*(na/50);
    count+=na/10;
    na-=10*(na/10);
    count+=na/5;
    na-=5*(na/5);
    count+=na;
    cout<<count<<endl;
}