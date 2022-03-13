#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        if(i==0){
            for(int j=N;j>i+1;j--)
            cout<<" ";
        cout<<"*";
        }
        else if(i==N-1){
            for(int k=0;k<i*2+1;k++)
                cout<<"*";
        }
        else{
            for(int j=N;j>i+1;j--)
                cout<<" ";
            cout<<"*";
            for(int k=0;k<2*i-1;k++)
                cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
}