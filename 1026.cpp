#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N],B[N],temp,sum=0;
    for(int i=0;i<N;i++)
        cin>>A[i];
    for(int i=0;i<N;i++)
        cin>>B[i];
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(B[i]<B[j]){
                temp=B[i];
                B[i]=B[j];
                B[j]=temp;
            }
        }
    }
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(A[i]>A[j]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    for(int i=0;i<N;i++)
        sum+=A[i]*B[i];
    cout<<sum<<endl;
}