#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N,K,res,j=1;
        bool RorL=true;
        cin>>N>>K;
        res=0;
        while(N>0){
            if(N==(K*j)){
                N-=(K*j);
                if(RorL)
                    res+=(K*j)-1;
                else
                    res-=(K*j)-1;
                RorL=!RorL;
            }
            else if(N>(K*j)){
                N-=(K*j);
                if(RorL)
                    res+=K*j;
                else
                    res-=K*j;
                RorL=!RorL;
            }
            else{
                if(RorL){
                    res+=N-1;
                    N=0;
                }
                else{
                    res-=N-1;
                    N=0;
                }
            }
            j++;
        }
        if(RorL)
            cout<<res<<" R"<<endl;
        else
            cout<<res<<" L"<<endl;
    }
}