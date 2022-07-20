#include<iostream>
using namespace std;
string arr;
string a1[8]={"000","001","010","011","100","101","110","111"};
string a2[8]={"0","1","10","11","100","101","110","111"};
int main(){
    cin>>arr;
    for(int i=0;i<arr.size();i++){
        int N=arr[i]-'0';
        if(i==0)
            cout<<a2[N];
        else
            cout<<a1[N];
    }
}
