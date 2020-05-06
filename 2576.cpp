#include<iostream>
using namespace std;
int main(){
    int arr[7],sum=0,min=100;
    for(int i=0;i<7;i++){
        cin>>arr[i];
        if(arr[i]%2==1){
            sum+=arr[i];
            if(arr[i]<min)
                min=arr[i];
        }
    }
    if(sum==0)
        cout<<-1<<endl;
    else
        cout<<sum<<endl<<min<<endl;
}