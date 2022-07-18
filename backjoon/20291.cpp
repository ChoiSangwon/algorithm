#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<string,int> > res;
vector<string> v1;

int main(){
    int N;
    cin>>N;
    string ta;
    for(int i=0;i<N;i++){
        cin >> ta;
		ta.erase(0, ta.find('.') + 1);
		v1.push_back(ta);
    }
    sort(v1.begin(),v1.end());
    int count=0;
    string temp=v1[0];
    for(int i=0;i<N;i++){
        if(temp!=v1[i]){
            res.push_back(make_pair(temp,count));
            count=0;
            temp=v1[i];
        }
        count++;
        if(i==N-1){
            res.push_back(make_pair(temp,count));
            break;
        }
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i].first<<" "<<res[i].second<<endl;
    }
}
