#include<iostream>
#include<stack>
using namespace std;
int main(){
    int N,M,i,j,temp,arr[101]={0,};
    cin>>N>>M;
    stack<int> S;
    for(int i=1;i<N+1;i++)
        arr[i]=i;
    for(int a=0;a<M;a++){
        cin>>i>>j;
        for(int k=i;k<=j;k++)
            S.push(arr[k]);
        for(int k=i;k<=j;k++){
            arr[k]=S.top();
            S.pop();
        }
    }
    for(int a=1;a<N+1;a++)
        cout<<arr[a]<<" ";
    cout<<endl;
    /*for(int i=1;i<N+1;i++)
        arr[i]=i;
    for(int a=0;a<M;a++){
        cin>>i>>j;
        for(int b=i;b<=(j+i)/2;b++,j--){
            temp=arr[b];
            arr[b]=arr[j];
            arr[j]=temp;
        }
    }
    for(int i=1;i<N+1;i++)
        cout<<arr[i]<<" ";
    cout<<endl;*/
}