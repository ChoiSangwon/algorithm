#include<iostream>
#include<vector>
using namespace std;

vector<int> arr[101];
int N,A,visited[101]={0,},count1=0;

void DFS(int a){
    visited[a]=1;
    count1++;
    for(int i=0;i<arr[a].size();i++){
        if(visited[arr[a][i]]!=1)
            DFS(arr[a][i]);
    }
}


int main(){

    cin>>N>>A;
    for(int i=0;i<A;i++){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    DFS(1);
    count1--;
    cout<<count1<<endl;
}