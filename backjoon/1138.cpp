#include<iostream>
using namespace std;
int main(){
    int N,a,arr[11]={0,},count;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>a;
        count=0;
        for(int j=0;j<N;j++){
            if(arr[j]==0){
                count++;
            }
            if(count>a){
                arr[j]=i;
                break;
            }
        }
    }
    for(int i=0;i<N;i++){
        cout<<arr[i];
        if(i==N-1)
            break;
        cout<<" ";
    }
    cout<<endl;
}