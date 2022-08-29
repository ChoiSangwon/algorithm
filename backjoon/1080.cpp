#include<iostream>
using namespace std;
char arr[51][51]={0,};
char res[51][51]={0,};

void cmp(int x,int y){
    for(int i=x;i<x+3;i++){
        for(int j=y;j<y+3;j++){
            if(arr[i][j]=='0')
                arr[i][j]='1';
            else
                arr[i][j]='0';
        }
    }
}

int main(){
    int N,M,count=0;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        getchar();
        for(int j=0;j<M;j++){
            scanf("%c",&arr[i][j]);
        }
    }
    for(int i=0;i<N;i++){
        getchar();
        for(int j=0;j<M;j++){
            scanf("%c",&res[i][j]);
        }
    }
    for(int i=0;i<N-2;i++){
        for(int j=0;j<M-2;j++){
            if(arr[i][j]!=res[i][j]){
                cmp(i,j);
                count++;
            }
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j]!=res[i][j]){
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<count<<endl;
}