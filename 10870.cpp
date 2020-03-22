#include<iostream>
using namespace std;
int main(){
    int N,count=0,fir=0,sec=0;
    cin>>N;
    if(N==1)
        cout<<1<<endl;
    else{
        for(int i=0;i<N-1;i++){
            if(i==0){
                count++;
                continue;
            }
            else if(i==1){
                count++;
                fir=1;
                sec=0;
                continue;
            }
            sec=fir;
            fir=count;
            count=fir+sec;
        }
        cout<<count<<endl;
    }
}