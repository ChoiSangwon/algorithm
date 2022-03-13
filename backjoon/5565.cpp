#include<iostream>
using namespace std;
int main(){
    int arr[9],a;
    cin>>a;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        a-=arr[i];
    }
    cout<<a<<endl;
}