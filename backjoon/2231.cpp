#include<iostream>
using namespace std;
int main(){
    int N,i=0,k=0,ex,sum=0;
    cin>>N;
    ex=N;
    int arr[10];
    while(ex>0){
        i++;
        ex/=10;
    }
    for(int j=N-((i+1)*9);j<=N;j++){
        k=0;
        sum=j;
        while(sum>0){
            arr[k++]=sum%10;
            sum/=10;
        }
        sum=j;
        for(int q=0;q<k;q++)
            sum+=arr[q];
        if(sum==N){
            sum=j;
            break;
        }
        else
            sum=0;
        
    }
    cout<<sum<<endl;
}