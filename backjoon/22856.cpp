#include<iostream>
#include<map>
using namespace std;
map<int,pair<int,int> > tree;
int N;
int res=0;
int d=0;
void solve(int node,bool check) {
    res++;
	if (tree[node].first != -1) {
		solve(tree[node].first,false);
	}
	if (tree[node].second != -1) {
        if(check)
            d++;
		solve(tree[node].second,check);
	}
    
}

int main(){
    int a,b,c;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a>>b>>c;
        tree[a].first=b;
        tree[a].second=c;
    }
    solve(1,true);
    cout<<2*(res-1)-d<<endl;
}