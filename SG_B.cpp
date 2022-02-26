#include<iostream>
#include<string>
using namespace std;

int visited[100002]={0,};
char arr[100002],T[27];

int main(){
    int res=0,count1;
    cin>>arr>>T;
    int arr_size=strlen(arr),T_size=strlen(T);
    //cout<<a.size()<<endl;
    while(1){
        count1=0;
        for(int i=0,j=0;i<arr_size;i++){
            if(arr[i]==T[j]&&visited[i]==0){
                count1++;
                visited[i]=1;
                j++;
            }
            if(j==T_size){
                res++;
                j=0;
            }

        }
        if(count1==0)
            break;
    }
    cout<<res<<endl;
}