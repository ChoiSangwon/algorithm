#include<iostream>
using namespace std;
int arr[101][101]={0,},visited[101],res[101];

int main(){
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;
    }
    

}