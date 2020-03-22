#include<iostream>
using namespace std;
int main(){
    int N,M,A,count=0,bo=0,sum=0,t=0;
    cin>>N>>M;
    for(int i=N;i<M+1;i++){
        bo=0;
        if(i==1)
            continue;
        else if(i==2){
            count++;
            continue;
        }
        for(int j=2;j<i;j++){
            if(i%j==0){
                bo+=1;
                break;
            }
        }
        if(bo==0){
            sum+=i;
            if(t==0)
                t=i;
        }
    }
    if(sum==0)
        cout<<-1<<endl;
    else{
        cout<<t<<endl;
        cout<<sum<<endl;
    }
}