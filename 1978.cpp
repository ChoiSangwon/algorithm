#include<iostream>
using namespace std;
int main(){
    int N,A,count=0,bo=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>A;
        bo=0;
        if(A==1)
            continue;
        else if(A==2){
            count++;
            continue;
        }
        for(int i=2;i<A;i++){
            if(A%i==0){
                bo+=1;
                break;
            }
        }
        if(bo==0)
            count++;
    }
    cout<<count<<endl;
}