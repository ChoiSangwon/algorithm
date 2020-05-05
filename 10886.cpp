#include<iostream>
using namespace std;
int main(){
    int N,yes=0,no=0;
    cin>>N;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        if(a==1)
            yes++;
        else
            no++;
    }
    if(yes>no)
        cout<<"Junhee is cute!"<<'\n';
    else
        cout<<"Junhee is not cute!"<<'\n';
}