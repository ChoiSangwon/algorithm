#include<iostream>
using namespace std;
int main(){
    int T;
    cin >>T;
    for(int i=0;i<T;i++){
        int A,B,sum=1;
        cin>>A>>B;
        for(int j=0;j<B;j++){
            sum*=A;
            sum=sum%10;
        }
        if(sum==0)
            cout<<"10"<<endl;
        else
            cout<<sum<<endl;
    }
}