#include<iostream>
using namespace std;
int main(){
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        char arr[1001]={0,};
        for(int j=0;j<N;j++){
            char a;
            cin>>a;
            if(j==0)
                arr[0]=a;
            else{
                if(a<=arr[0]){
                    for(int k=j;k>0;k--){
                        arr[k]=arr[k-1];
                    }
                    arr[0]=a;
                }
                else{
                    arr[j]=a;
                }
            }
        }
        for(int j=0;j<N;j++)
            cout<<arr[j];
        cout<<endl;
    }
}