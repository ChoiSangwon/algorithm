#include<iostream>
using namespace std;
int main(){
    int N,a,b,c,count1=0,tmp;
    cin>>N;
    for(int i=2;i<=N-4;i+=2){
        tmp=N-i;
        for(int j=1;j<N-i-2;j++){
            if((tmp-j)-j>=2)
                count1++;
        }

    }
    cout<<count1<<endl;
}