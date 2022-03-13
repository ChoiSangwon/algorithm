#include<iostream>
using namespace std;
int main(){
    int N,A,B,count,k=0;
    while(1){
        cin>>N;
        if(N==0)
            break;
        int arr[N];
        for(int i=3;i<N;i++){
            count=0;
            for(int j=2;j<i;j++){
                if(j%i==0){
                    count++;
                    break;
                }
            }
            if(count==0){
                arr[k]=i;
                k++;
            }
        }
        int a=0;
        cout<<sizeof(arr)<<endl;
        for(int i=0;i<sizeof(arr)/sizeof(int);i++){
            for(int j=0;j<sizeof(arr)/sizeof(int);j++){
                if(i!=j&&arr[i]+arr[j]==N){
                    A=arr[i];
                    B=arr[j];
                    a++;
                    break;
                }
            }
            if(a!=0)
                break;
        }
        if(a!=0)
            cout<<N<<" = "<<A<<" + "<<B<<endl;
        else
            cout<<"Goldbach's conjecture is wrong."<<endl;
        delete [] arr;
        /*for(int i=3;i<N;i+=2){
            count=0;
            for(int j=2;j<i;j++){
                if(j%i==0){
                    count++;
                    break;
                }
            }
            if(count==0){
                for(int k=2;k<N-i;k++){
                    if((N-i)%k==0){
                        count++;
                        break;
                    }
                }
                if(count==0){
                    A=i;
                    B=N-i;
                }
            }
            if(count==0)
                break;
            else
                continue;
        }
        if(count==0)
            cout<<N<<" = "<<A<<" + "<<B<<endl;
        else
            cout<<"Goldbach's conjecture is wrong."<<endl;*/
    }   
}