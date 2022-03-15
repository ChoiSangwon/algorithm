#include <string>
#include <vector>
#include<iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int arr[100]={0,},len=progresses.size();
    
    int j=0,res=0;
    while(res<len){
        for(int i=0;i<len;i++){
            if(arr[i]==1)
                continue;
            progresses[i]+=speeds[i];
        }
        if(progresses[j]>=100){
            int count1=0,ccc=0;
            for(int k=j;k<len;k++){
                if(arr[k]==1)
                    continue;
                if(progresses[k]>=100&&ccc==0){
                    arr[k]=1;
                    count1++;
                }
                else
                    ccc++;
            }
            cout<<"\n";
            answer.push_back(count1);
            res+=count1;
            
            
            for(int i=0;i<len;i++){
                if(arr[i]==0){
                    j=i;
                    break;
                }
            }
        }
    }
    
    return answer;
}