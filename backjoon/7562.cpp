#include<iostream>
#include<queue>
using namespace std;
int visited[301][301]={0,},arr[301][301]={0,},arriveX,arriveY,count=0;;
bool ans=true;
queue <pair<int,int>> asd;

int X[8]={-2,-1,1,2,-2,-1,1,2};
int Y[8]={1,2,2,1,-1,-2,-2,-1};

int main(){
    int T,l,currentX,currentY;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>l>>currentX>>currentY>>arriveX>>arriveY;
        visited[arriveX][arriveY]=2;
        asd.push(make_pair(currentX,currentY));
        while(ans){
            int a=asd.front().first,b=asd.front().second;
            asd.pop();
            for(int j=0;j<8;j++){
                if(visited[a+X[j]][b+Y[j]]==2){
                    ans=false;
                    break;
                }
                if(visited[a+X[j]][b+Y[j]]==0){
                    visited[a+X[j]][b+Y[j]]=1;
                    asd.push(make_pair(a+X[j],b+Y[j]));
                }
                
            }
            if(ans)
                break;
            count++;
        }
    cout<<count<<endl;
    }
}