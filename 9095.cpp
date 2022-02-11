#include<iostream>
using namespace std;
int count=0;

void sum(int a){
    if(a==0){
        count++;
        return;
    }
    else if(a<0){
        return;
    }
    sum(a-1);
    sum(a-2);
    sum(a-3); 
}

int main(){
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        count=0;
        cin>>N;
        sum(N);
        cout<<count<<endl;
    }
}
