#include<iostream>
using namespace std;
char arr[26];
char arr2[26];
char res[1001][26];
char anw[26];
int N,K,que;

int main(){
    cin>>K>>N;
    char temp='A';
    for(int i=0;i<K;i++){
        scanf(" %c",&arr2[i]);
        arr[i]=temp+i;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<K-1;j++){
            scanf(" %c",&res[i][j]);
            if(res[i][j]=='?')
                que=i;
        }
    }
    for(int i=0;i<que;i++){
        for(int j=0;j<K-1;j++){
            if(res[i][j]=='-'){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }   
    }
    for(int i=N-1;i>que;i--){
        for(int j=0;j<K-1;j++){
            if(res[i][j]=='-'){
                temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }  
    }
    bool check=false;
    for(int i=0;i<K-1;i++){
        if(arr[i]==arr2[i])
            anw[i]='*';
        else if(arr[i]==arr2[i+1]){
            anw[i]='-';
            anw[i+1]='*';
            i++;
        }
        else{
            check=true;
            break;
        }
    }
    if(check){
        for(int i=0;i<K-1;i++)
            cout<<"x";
    }
    else{
        for(int i=0;i<K-1;i++)
            cout<<anw[i];
    }
}