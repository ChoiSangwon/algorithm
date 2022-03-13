#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int tall[N],weight[N],aa;
    for(int i=0;i<N;i++)
        cin>>tall[i]>>weight[i];
    for(int i=0;i<N;i++){
        aa=0;
        for(int j=0;j<N;j++){
            if(tall[i]<tall[j]&&weight[i]<weight[j])
                aa++;
        }
        cout<<aa+1<<" ";
    }
}