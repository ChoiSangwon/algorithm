#include <string>
#include <vector>
#include <iostream>
using namespace std;


int visited[51]={0,};
int res=0;

void DFS(int a,string target, vector<string> words,int n){
    visited[a]=1;
    if(target==words[a]){
        if(res==0){
            res=n;
            visited[a]=0;
            return;
        }
        else{
            res=min(res,n);
            visited[a]=0;
            return;
        }
    }
    for(int i=0;i<words.size();i++){
        int count2=0;
        if(visited[i]==0){
            for(int j=0;j<target.size();j++){
                if(words[i][j]==words[a][j])
                    count2++;
            }
            if(count2==target.size()-1){
                DFS(i,target,words,n+1);
            }
        }
    }
    visited[a]=0;
}


int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    int len=0;
    //words에 target이 있는지 확인
    for(int i=0;i<words.size();i++){
        if(words[i]==target)
            len++;
    }
    if(len==0){
        return answer;
    }
    
    for(int i=0;i<words.size();i++){
        int count1=0;
        for(int j=0;j<begin.size();j++){
            if(words[i][j]==begin[j])
                count1++;
        }
        if(count1==begin.size()-1){
            DFS(i,target, words,1);
        }
    }
    answer=res;
    return answer;
}