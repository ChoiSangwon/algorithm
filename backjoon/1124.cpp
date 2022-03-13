#include<iostream>
using namespace std;
int main(){
    int A,B;
    cin>>A>>B;
    int arr[1000],j=2,size[100001],size_i=0,result=0;
    for(int i=A;i<=B;i++){
        int T=i;
        size[size_i]=0;
        while(T>1){
            if(T%j==0){
                size[size_i]++;
                T/=j;
                j=1;
            }
            j++;
        }
        size_i++;
        j=2;
    }
    for(int i=0;i<size_i;i++){
        if(size[i]!=2&&size[i]%2==0)
            continue;
        int T=size[i];
        int ad=0;
        while(T>1){
            if(T%j==0){
                ad++;
                T/=j;
                j=1;
            }
            j++;
        }
        j=2;
        if(ad==1){
            result++;
            //cout<<size[i]<<endl;
        }
    }
    cout<<result<<endl;
}