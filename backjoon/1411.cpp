#include<iostream>
#include<cstring>
using namespace std;


int main(){
    char arr[101][51];
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%s",arr[i]);
    }
    int len=strlen(arr[0]),res=0;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            int visited[27]={0,};
            int count1=0;
            //cout<<arr[i]<<" "<<arr[j]<<"  ";
            for(int k=0;k<len;k++){
                //cout<<arr[i][k]<<" "<<arr[j][k]<<" ";
                if(visited[arr[i][k]-'a']==0){
                    visited[arr[i][k]-'a']=arr[j][k];
                }
                else if(visited[arr[i][k]-'a']!=arr[j][k]){
                    count1++;
                }
            }
            //cout<<endl;
            
            for(int k=0;k<26;k++){
                if(visited[k]==0)
                    continue;
                for(int h=0;h<26;h++){
                    if(k==h)
                        continue;
                    if(visited[k]==visited[h])
                        count1++;
                }
            }
            if(count1==0){
                //cout<<arr[i]<<" "<<arr[j]<<endl;
                res++;
            }
        }
    }
    printf("%d\n",res);
}