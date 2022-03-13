#include <string>
#include <vector>
using namespace std;

int res=0;

void DFS(vector<int> numbers, int target,int sum){
    if(target==sum&&numbers.size()==0){
        res++;
        return;
    }
    if(numbers.size()==0)
        return;
    int a=numbers.back();
    numbers.pop_back();
    DFS(numbers,target,sum+a);
    DFS(numbers,target,sum-a);
    numbers.push_back(a);
}


int solution(vector<int> numbers, int target) {
    int answer = 0;
    DFS(numbers,target,0);
    answer=res;
    return answer;
}