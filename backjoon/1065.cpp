#include<iostream>

using namespace std;

int main(){
    int N,count=0,arr[2],a;
    cin>>N;
    if(N<100)
        cout<<N<<endl;
    else{
        count+=99;
        for(int i=100;i<=N;i++){
            a=i;
            arr[0]=a%10;
            a/=10;
            arr[1]=a%10;
            a/=10;
            if(a==arr[1]+(arr[1]-arr[0])){
                count++;
            }
        }
        cout<<count<<endl;
    }
}