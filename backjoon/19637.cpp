#include <iostream>
using namespace std;

int n, m;
int power[100001];
string title[100001];

int binsearch(int p){
    int mid = 0, left = 0, right = n-1;
    while(left <= right){
        mid = (left+right)/2;
        if(p <= power[mid])
            right = mid-1;
        else
            left = mid+1;
    }
    if(p > power[mid])
        return mid+1;
    else
        return mid;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> title[i] >> power[i];
    int p;
    for(int i = 0; i < m; i++){
        cin >> p;
        cout << title[binsearch(p)] << "\n";
    }
    return 0;
}