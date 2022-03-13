#include<iostream>
using namespace std;
int main(){
    int N,H;
    cin>>N>>H;
    int length[H+1],sucksoon[N+1];
    for(int i=1;i<H+1;i++)
        length[i]=0;
    int mina,count=0;
    for(int i=1;i<N+1;i++){
        cin>>sucksoon[i];
        if(i%2==1){
            for(int j=0;j<sucksoon[i];j++)
                length[j]++;
        }
        else{
            for(int j=H;j>=H-sucksoon[i];j--)
                length[j]++;
        }
        if(i==N){
            mina=length[1];
            for(int i=1;i<H+1;i++)
                mina=min(length[i],mina);
        }
    }
    for(int i=1;i<H+1;i++){
        if(mina==length[i])
            count++;
    }
    cout<<mina<<" "<<count<<endl;
}