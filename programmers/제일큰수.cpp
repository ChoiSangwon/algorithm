#include <string>
#include <vector>
#include<algorithm>
#include <iostream>
using namespace std;

int compare(int num1, int num2){
    int i1=1,i2=1,a1=num1,a2=num2,res1,res2;
    
    while(a1>0){
        a1/=10;
        i1*=10;
    }
    while(a2>0){
        a2/=10;
        i2*=10;
    }
    if(num1==0)
        i1=10;
    if(num2==0)
        i2=10;
    res1=(num1*i2)+num2;

    res2=(num2*i1)+num1;

    if(res1>res2)
        return 1;
    else if(res1<res2)
        return 0;
    else
        return 0;
    
    
}

string arr[100001];

string solution(vector<int> numbers) {
    string answer = "";
    int temp;
    
    sort(numbers.begin(),numbers.end(),compare);
    
    for(int i=0;i<numbers.size();i++){
        if(answer=="0"&&numbers[i]==0)
            continue;
        answer+=std::to_string(numbers[i]);
    }    
    return answer;
}