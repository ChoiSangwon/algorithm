#include<iostream>
#include<queue>
using namespace std;
int main(){
    int N;
    unsigned X;
    priority_queue<unsigned,vector<unsigned>,greater<unsigned> >q;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>X;
        if(X>0)
            q.push(X);
        if(X==0){
            if(q.empty())
                cout<<0<<endl;
            else{
                cout<<q.top()<<endl;
                q.pop();
            }
        }
    }
}