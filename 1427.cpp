#include<iostream>
using namespace std;
int main(){
    int N,arr[11],i=0,temp;
    cin>>N;
    while(N!=0){
        arr[i++]=N%10;
        N/=10;
    }
    for(int j=0;j<i;j++){
        for(int k=0;k<j;k++){
            if(arr[j]>arr[k]){
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for(int j=0;j<i;j++){
        cout<<arr[j];
    }
    cout<<endl;
}