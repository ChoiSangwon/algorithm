#include<iostream>
using namespace std;

int arr[501][501]={0,};
int main(){
    int H,W,a;
    cin>>H>>W;
    for(int i=0;i<W;i++){
        cin>>a;
        for(int j=0;j<a;j++){
            arr[j][i]=1;
        }
    }
    int res=0,check=0;
    for(int i=0;i<H;i++){
        if(check!=0)
            check=0;
        for(int j=1;j<W;j++){
            if(check!=0&&arr[i][j]==0){
                check++;
                continue;
            }
            if(check!=0&&arr[i][j]==1){
                res+=check;
                check=0;
                continue;
            }
            if(arr[i][j-1]==1&&arr[i][j]==0){
                check++;
            }
        }
    }
    cout<<res<<endl;
}