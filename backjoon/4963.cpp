#include <iostream>
#include <vector>
using namespace std;
int check[51][51]={0,};
int arr[51][51]={0,};
int w,h;

void DFS(int a,int b){
    check[a][b]=0;
    if(a>0 && check[a-1][b]==1)
        DFS(a-1,b);
    if(b>0 && check[a][b-1]==1)
        DFS(a,b-1);
    if(a<h-1 && check[a+1][b]==1)
        DFS(a+1,b);
    if(b<w-1 && check[a][b+1]==1)
        DFS(a,b+1);
    if(a>0&&b>0 && check[a-1][b-1]==1)
        DFS(a-1,b-1);
    if(a>0&&b<w-1 && check[a-1][b+1]==1)
        DFS(a-1,b+1);
    if(b>0 &&a<h-1&& check[a+1][b-1]==1)
        DFS(a+1,b-1);
    if(a<h-1 &&b<w-1 &&check[a+1][b+1]==1)
        DFS(a+1,b+1);
}

int main(){
    while (1){
        int count=0;
        cin>>w>>h;
        if(w==0&&h==0)
            break;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>check[i][j];
            }
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(check[i][j]==1){
                    count++;
                    DFS(i,j);
                }
            }
        }
        cout<<count<<endl;
    }
}