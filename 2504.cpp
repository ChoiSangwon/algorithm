#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main(){
    char arr[30];
    cin>>arr;
    stack<char> S;
    int TorF=0,num=0,temp=1;
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]=='('){
            temp*=2;
            S.push(arr[i]);
        }
        else if(arr[i]=='['){
            temp*=3;
            S.push(arr[i]);
        }
        else if(arr[i]==')'){
            if(S.empty()){
                TorF++;
                break;
            }
            if(arr[i-1]=='(')
                num+=temp;
            if(S.top()=='('){
                S.pop();
                temp/=2;
            }
        }
        else if(arr[i]==']'){
            if(S.empty()){
                TorF++;
                break;
            }
            if(arr[i-1]=='[')
                num+=temp;
            if(S.top()=='['){
                S.pop();
                temp/=3;
            }
        }
    }
    if(S.empty()!=true||TorF!=0)
        cout<<0<<endl;
    else
        cout<<num<<endl;
}