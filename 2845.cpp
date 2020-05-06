#include<iostream>
using namespace std;
int main(){
    int L,P,arr[5];
    cin>>L>>P;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        cout<<arr[i]-L*P<<" ";
    }
    cout<<endl;
}