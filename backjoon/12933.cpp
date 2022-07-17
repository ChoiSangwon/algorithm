#include<iostream>
#include<vector>
using namespace std;
string arr;
int visit[2501]={0,};
int main(){
    cin>>arr;
    int N=arr.size();
    int res=0;
    while(1){
        int check1=0,duckcheck=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]=='q'&&check1==0&&visit[i]==0){
                duckcheck++;
                check1++;
                visit[i]=1;
                N--;
            }
            else if(arr[i]=='u'&&check1==1&&visit[i]==0){
                duckcheck++;
                check1++;
                visit[i]=1;
                N--;
            }
            else if(arr[i]=='a'&&check1==2&&visit[i]==0){
                duckcheck++;
                check1++;
                visit[i]=1;
                N--;
            }
            else if(arr[i]=='c'&&check1==3&&visit[i]==0){
                duckcheck++;
                check1++;
                visit[i]=1;
                N--;
            }
            else if(arr[i]=='k'&&check1==4&&visit[i]==0){
                duckcheck++;
                check1=0;
                visit[i]=1;
                N--;
            }
        }
        if(check1==0&&duckcheck!=0)
            res++;
        if(duckcheck==0)
            break;
    }
    if(N==0&&arr.size()%5==0&&res!=0)
        cout<<res<<endl;
    else
        cout<<-1<<endl;
}