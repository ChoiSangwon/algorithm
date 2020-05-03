#include<iostream>
using namespace std;
int main(){
    int M,arr[3],temp,a,b;
    cin>>M;
    arr[0]=1;
    arr[1]=arr[2]=0;
    for(int i=0;i<M;i++){
        cin>>a>>b;
        temp=arr[a-1];
        arr[a-1]=arr[b-1];
        arr[b-1]=temp;
    }
    int fin=-2;
    for(int i=0;i<3;i++){
        if(arr[i]==1)
            fin=i;
    }
    cout<<fin+1<<endl;
}