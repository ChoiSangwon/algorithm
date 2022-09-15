#include <iostream>
#include <vector>
using namespace std;
int check[1001]={0,};
vector<int> arr[1001];

void DFS(int a){
    check[a]=1;
    for(int i=0;i<arr[a].size();i++){
        if(check[arr[a][i]]==0){
            DFS(arr[a][i]);
        }
    }
}

int main(){
    int N,M,count=0;
    cin>>N>>M;
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for(int i=1;i<N+1;i++){
        // cout<<i<<" "<<arr[i].size()<<endl;
        if(check[i]==0){
            count++;
            DFS(i);
        }
    }
    cout<<count<<endl;
}

