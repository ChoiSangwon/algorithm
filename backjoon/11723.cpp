#include<iostream>
#include<string.h>
using namespace std;
int S[21]={0,};
int S_size=0;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        ios_base::sync_with_stdio(0);
        int X;
        char arr[10];
        cin >> arr;
        if(strcmp(arr,"all")==0){
            for(int j=0;j<20;j++){
                S[j]=j;
            }
        }
        else if (strcmp(arr,"empty")==0)
        {
            for(int j=0;j<20;j++){
                S[j]=0;
            }
        }
        else{
            cin>>X;
            if(strcmp(arr,"add")==0){
                if(S[X-1]==X)
                    break;
                S[X-1]=X;
            }
            else if(strcmp(arr,"remove")==0){
                S[X-1]=0;
            }
            else if(strcmp(arr,"check")==0){
                if(S[X-1]==0)
                    cout<<0<<endl;
                else
                    cout<<1<<endl;
            }
            else if(strcmp(arr,"toggle")==0){
                if(S[X-1]==0)
                    S[X-1]=X;
                else
                    S[X-1]=0;
            }
        }
    }
}