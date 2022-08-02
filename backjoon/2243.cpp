#include<iostream>
using namespace std;
int N,M,res=0;
int arr[100001];
int main(){
    cin>>N>>M;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        res+=arr[i];
    }
    int left=arr[0],right=res;
    for(int i=1;i<N;i++){
        if(arr[i]>left)
            left=arr[i];
    }
    while(left<=right){
        int mid=(left+right)/2;
        int a=0,sum=0;
        for(int i=0;i<N;i++){
            if(sum+arr[i]>mid){
                a++;
                sum=0;
            }
            sum+=arr[i];
        }
        if(sum!=0) a++;
        if(a>M) left=mid+1;
        else  right=mid-1;
    }
    cout<<left<<endl;
}