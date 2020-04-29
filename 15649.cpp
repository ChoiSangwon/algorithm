#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int A[M];
    for(int i=0;i<M;i++)
        A[i]=0;
    int i=0;
    while(i<M){
        A[i]++;
        for(int j=0;j<M;j++){
            cout<<A[j]<<" ";
        }
        cout<<endl;
        if(A[i]>=N){
            i++;
        }
    }
}