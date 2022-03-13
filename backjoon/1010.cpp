#include<iostream>
using namespace std;
int main(){
    long long N,M,res=1,R=1,A;
    cin>>A;
    for(int j=0;j<A;j++){
        R=res=1;
        cin>>N>>M; 
        if(N*M!=0){
            for(int i=M-N+1;i<M+1;i++){
                res*=i;
                res/=R++;
            }    
        }
        cout<<res<<endl;
    }
}