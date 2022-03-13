#include<iostream>
#include<cstring>
using namespace std;
char S[11];
int arr[150]={0,},copy1[150]={0,},len,sum=0;
void DFS(int a,int b ){
    if(b==len){
        sum++;
        return;
    }

    for(int j=97;j<123;j++){
        if(a==j)
            continue;
        if(arr[j]!=0){
            arr[a]--;
            DFS(j,b+1);
            arr[a]++;
        }
    }

}


int main(){
    cin>>S;
    len=strlen(S);
    //cout<<len<<endl;
    for(int i=0;i<len;i++){
        arr[S[i]]++;
    }
    for(int j=97;j<123;j++){
        if(arr[j]!=0){
            DFS(j,1);
        }
    }
    cout<<sum<<endl;
}