#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int a=N/5,b=N/3,i=0,j,count=-1;
    while((i*5)<=N){
        int c=N;
        c-=i*5;
        if(c%3==0){
            if(count==-1)
                count=i+c/3;
            else if(count>i+c/3)
                count=i+c/3;
        }
        i++;
    }
    cout<<count<<endl;
}