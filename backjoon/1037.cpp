#include<iostream>
using namespace std;
int main(){
    int N,sum=1,temp;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
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
    cout<<A[0]*A[N-1]<<endl;
}