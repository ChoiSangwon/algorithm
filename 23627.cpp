#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char arr[1001],driip[6]="driip";
    cin>>arr;
    int len=strlen(arr),count1=0;
    if(len<5)
        cout<<"not cute"<<endl;
    else{
        for(int i=len-5,j=0;i<len;i++,j++){
            if(arr[i]==driip[j])
                count1++;
        }
    }
    if(count1==5)
        cout<<"cute"<<endl;
    else
        cout<<"not cute"<<endl;
}