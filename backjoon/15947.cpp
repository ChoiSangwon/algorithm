#include<iostream>
using namespace std;
char arr[15][8]={"baby", "sukhwan", "tururu", "turu",
"very", "cute", "tururu", "turu",
"in", "bed", "tururu", "turu",
"baby", "sukhwan"};

int main(){
    int N;
    cin>>N;
    if(N%14-1==2||N%14-1==3||N%14-1==6||N%14-1==7||N%14-1==10||N%14-1==11){
        if((N/14)>=3&&(N%14-1==2||N%14-1==6||N%14-1==10)){
            cout<<"tu+ru*"<<((N-1)/13)+2;
        }
        else if((N/14)>=4&&(N%14-1==3||N%14-1==7||N%14-1==11)){
            cout<<"tu+ru*"<<(N/14);
        }
        else{
            cout<<arr[N%14-1];
            for(int i=0;i<N/14;i++)
            cout<<"ru";
        }
        cout<<endl;
    }
    else{
        cout<<arr[N%14-1]<<endl;
    }


}