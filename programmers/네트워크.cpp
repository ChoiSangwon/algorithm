#include <string>
#include <vector>
#include<iostream>
bool visited[201]={0,};
using namespace std;

void DFS(vector<vector<int>> computers,int a){
    visited[a]=1;
    for(int j=0;j<computers.size();j++){
        if(a==j)
            continue;
        if(computers[a][j]==1&&visited[j]==0){
            DFS(computers,j);
        }
    }
    //std::cout<<computers.size()<< " "<<computers[0].size();
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            DFS(computers,i);
            answer++;
        }
    }
    return answer;
}