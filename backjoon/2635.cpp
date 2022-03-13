#include<iostream>
using namespace std;

int main(){
    int N,count,a1,a2,a3=0,maxI=0;;
    cin>>N;
    for(int i=0;i<=N/2;i++){
        //cout<<i<<endl;
        count=2;
        a1=N;
        //cout<<a1<<" ";
        a2=a1-i;
        //cout<<a2<<" ";
        while(a1>0){
            a1=a1-a2;
            if(a1<0)
                break;
            //cout<<a1<<" ";
            count++;
            a2=a2-a1;
            if(a2<0)
                break;
            count++;
            //cout<<a2<<" ";
        }
        //cout<<endl;
        if(count>a3){
            maxI=i;
            a3=count;
            //cout<<i<<endl;
        }
    }
    cout<<a3<<endl;
    a1=N;
    cout<<a1<<" ";
    a2=a1-maxI;
    cout<<a2<<" ";
    while(a1>0){
        a1=a1-a2;
        if(a1<0)
            break;
        cout<<a1<<" ";
        count++;
        a2=a2-a1;
        if(a2<0)
            break;
        count++;
        cout<<a2<<" ";
    }

}