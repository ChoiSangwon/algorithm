#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[1000000],chr[1000000];
    int j=0,num[1000000]={0,},check;
    cin>>arr;
    for(int i=0;i<strlen(arr);i++){
        check=0;
        for(int k=0;k<j;k++){
            if(arr[i]==chr[k]||arr[i]-32==chr[k]||arr[i]+32==chr[k]){
                num[k]++;
                check++;
                break;
            }
        }
        if(check==0){
            num[j]=1;
            chr[j]=arr[i];
            j++;
        }
    }
    int maxint=0,cou,Rcount=0;
    for(int i=0;i<j;i++){
        if(maxint<=num[i]){
            maxint=num[i];
            cou=i;
        }
    }
    for(int i=0;i<j;i++){
        if(maxint==num[i])
            Rcount++;
    }
    if(Rcount==1){
        if(97<=chr[cou]&&chr[cou]<=122)
            cout<<char(chr[cou]-32)<<endl;
        else
            cout<<chr[cou]<<endl;
    }
    else
        cout<<'?'<<endl;
    
}