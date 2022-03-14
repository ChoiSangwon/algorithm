#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int arr[32]={0,};
    int answer = 0;
    for(int i=0;i<reserve.size();i++){
        arr[reserve[i]]+=1;
    }
    for(int i=0;i<lost.size();i++){
        arr[lost[i]]-=1;
    }
    for(int i=1;i<=n;i++)
        std::cout<<arr[i]<<" ";
    std::cout<<"\n";
    for(int i=1;i<=n;i++){
        if(arr[i]>=0)
            answer++;
        else if(arr[i]==-1){
            if(arr[i-1]==1){
                arr[i-1]-=1;
                answer++;
            }
            else if(arr[i+1]==1){
                arr[i+1]-=1;
                answer++;
            }
        }
    }
    
    return answer;
}