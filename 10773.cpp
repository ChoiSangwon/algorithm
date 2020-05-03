#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> arr;
    int K,sum=0,a,b;
    cin>>K;
    for(int i=0;i<K;i++){
        cin>>a;
        if(a==0)
            arr.pop();
        else
            arr.push(a);
    }
    b=arr.size();
    for(int i=0;i<b;i++){
        sum+=arr.top();
        arr.pop();
    }
    cout<<sum<<endl;
}