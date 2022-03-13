#include<iostream>
using namespace std;

int main(){
    int N,K,a;
    cin>>N>>K;
    int arr[1001];
    for(int i=1;i<N+1;i++)
        arr[i]=i;
    cout<<"<";
    for(int i=1;i<N+1;i++){
        for(int j=0;j<K;j++){
            a++;
            if(a>N)
                a-=N;
            if(arr[a]==0)
                j--;
        }
        if(i==N){
            cout<<arr[a]<<">"<<endl;
            break;
        }
        cout<<arr[a]<<", ";
        arr[a]=0;
    }
}