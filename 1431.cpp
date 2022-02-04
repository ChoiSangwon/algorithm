#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int N;
    char arr[51][51];
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(strlen(arr[i])>strlen(arr[j]))
                swap(arr[i],arr[j]);
            else if(strlen(arr[i])==strlen(arr[j])){
                int count1=0,count2=0;
                for(int k=0;k<strlen(arr[i]);k++){
                    if(arr[i][k]>='0'&&arr[i][k]<='9')
                        count1+=arr[i][k]-'0';
                    if(arr[j][k]>='0'&&arr[j][k]<='9')
                        count2+=arr[j][k]-'0';
                }
                if(count1>count2){
                    swap(arr[i],arr[j]);
                }
                else if(count1==count2&&(strcmp(arr[i],arr[j])>0))
                    swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<N;i++)
        cout<<arr[i]<<endl;
}

void swap(char *arr1,char *arr2){
    char temp[50];
    strcpy(temp,arr1);
    strcpy(arr1,arr2);
    strcpy(arr2,temp);
}