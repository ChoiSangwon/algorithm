#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char arr[51][51];
    int inder[51];
    int N,res=0;
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>arr[i];

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(strlen(arr[i])>strlen(arr[j])){
                char temp[51];
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
    
    for(int i=0;i<N-1;i++){
        int len=strlen(arr[i]),count1=0;
        for(int j=i+1;j<N;j++){
            int count=0;
            for(int k=0;k<len;k++){
                if(arr[i][k]==arr[j][k]){
                    //cout<<arr[i]<<" "<<arr[j]<<" " << arr[i][k]<<" ";
                    count++;
                }
            }
            //cout<<endl;
            if(count==len){
                //cout<<arr[i]<<" "<<arr[j]<<endl;
                count1++;
            }
        }
        if(count1==0){
            //cout<<arr[i]<<" "<<endl;
            res++;
        }
    }
    res++;
    cout<<res<<endl;
    
    /*
    for(int i=0;i<N;i++)
        cout<<arr[i]<<endl;*/
}