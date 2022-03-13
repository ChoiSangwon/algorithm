#include<iostream>
#include<cstring>
using namespace std;
char arr[201][201]={0,},word[101];
int H,W,L;
long long res=0;

void DFS(int a,int b,int c){
    //cout<<"a"<<endl;
    c++;
    if(c==5){
        //cout<<"a"<<endl;
        res++;
        return;
    }
    if(a>1&&arr[a-1][b]==word[c])
        DFS(a-1,b,c);
    if(b>1&&a>1&&arr[a-1][b-1]==word[c])
        DFS(a-1,b-1,c);
    if(b>1&&arr[a][b-1]==word[c])
        DFS(a,b-1,c);
    if(b<W&&a>1&&arr[a-1][b+1]==word[c])
        DFS(a-1,b+1,c);
    if(b>1&&a<H&&arr[a+1][b-1]==word[c])
        DFS(a+1,b-1,c);
    if(a<H&&arr[a+1][b]==word[c])
        DFS(a+1,b,c);
    if(b<W&&arr[a][b+1]==word[c])
        DFS(a,b+1,c);
    if(a<H&&b<W&&arr[a+1][b+1]==word[c])
        DFS(a+1,b+1,c);
}


int main(){
    cin>>H>>W>>L;
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin>>arr[i][j];
        }
    }
    cin>>word;/*
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<word<<endl;
    */
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            if(arr[i][j]==word[0])
                DFS(i,j,0);
        }
    }
    //cout<<'A'<<endl;
    cout<<res<<endl;
}