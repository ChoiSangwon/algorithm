#include<iostream>
using namespace std;
int main(){
    int N,temp;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<N;i++){
        cout<<arr[i]<<endl;
    }
}