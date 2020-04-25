#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int T;
        cin>>T;
        int sum=0,arr[10000],aply=1,j=0,boo=0;
        while(sum<T){
            sum+=aply;
            arr[j++]=sum;
            aply++;
        }
        for(int k=0;k<j;k++){
            for(int a=0;a<j;a++){
                for(int m=0;m<j;m++){
                    if(arr[k]+arr[a]+arr[m]==T){
                        boo=1;
                        break;
                    }
                }
                if(boo==1)
                    break;
            }
            if(boo==1)
                break;
        }
        if(boo==1)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        
    }
}