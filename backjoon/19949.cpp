#include<iostream>
using namespace std;

#define MAX 10

int arr[MAX]={0,};
int visit[MAX]={0,};
int res=0,tmp=0;

void DFS(int depth,int i){
    //cout<<depth<<" "<<i<<endl;
    
    visit[i]=1;
    if(depth==3){
        if(tmp>5)
            res++;
        visit[i]=0;
    }
    for(int j=i;j<MAX;j++){
        if(visit[j]==0){
            tmp+=arr[j];
            DFS(depth+1,j);
            tmp-=arr[j];
        }
    }
    visit[i]=0;
}


int main(){
    for(int i=0;i<MAX;i++){
        cin>>arr[i];
    }
    for(int i=0;i<MAX;i++)
        DFS(1,i);
    cout<<res<<endl;
}