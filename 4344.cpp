/*#include<stdio.h>
int main(){
    int C,N;
    scanf("%d",&C);
    for(int i=0;i<C;i++){
        scanf("%d",&N);
        int arr[N];

    }
}*/

#include<iostream>
using namespace std;
int main(){
    int C,N,avg;
    cin>>C;
    float count,anw[C];
    
    for(int i=0;i<C;i++){
        cin>>N;
        int arr[N];
        avg=0;
        count=0;
        for(int j=0;j<N;j++){
            cin>>arr[j];
            avg+=arr[j];
        }
        avg/=N;
        //cout<<avg<<endl;
        for(int j=0;j<N;j++){
            if(arr[j]>avg)
                count++;
        }
        anw[i]=(count/N)*100.0;
    }
    cout<<fixed;
    cout.precision(3);
    for(int i=0;i<C;i++){
        cout<<anw[i]<<"%"<<endl;
    }
    
}