#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    for(int i=citations.size();i>=0;i--){
        int aa=0;
        for(int j=0;j<citations.size();j++){
            if(citations[j]>=i)
                aa++;
        }
        if(aa>=i){
            answer=i;
            break;
        }
    }
    
    
    return answer;
}