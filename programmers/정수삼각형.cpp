#include <string>
#include <vector>
using namespace std;

int dp[502][502]={0,};

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    for(int i=1;i<=triangle.size();i++){
        for(int j=1;j<=triangle[i-1].size();j++){
            dp[i][j]=max(dp[i-1][j-1]+triangle[i-1][j-1],dp[i-1][j]+triangle[i-1][j-1]);
        }
    }
    answer=dp[triangle.size()][0];
    for(int i=1;i<triangle[triangle.size()-1].size();i++){
        answer=max(answer,dp[triangle.size()][i]);
    }
    
    return answer;
}