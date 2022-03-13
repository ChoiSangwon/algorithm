#include<iostream>
using namespace std;
int main(){
    char arr[8];
    int count=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>arr[j];
            if(i%2==0&&j%2==0&&arr[j]=='F')
                count++;
            else if(i%2==1&&j%2==1&&arr[j]=='F')
                count++;
        }
    }
    cout<<count<<endl;
}