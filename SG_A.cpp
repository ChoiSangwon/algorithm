#include<iostream>
using namespace std;
int arr[100002]={0,},res[100002]={0,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,count1,sma;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<N;i++){
        count1=0;
        for(int j=i+1;j<=N;j++){
            if(arr[i]==arr[j])
                continue;
            if(count1==0&&arr[j]!=arr[i]){
                sma=j;
                count1++;
            }
            if(arr[j]<arr[sma]){
                sma=j;
                count1++;
            }
        }
        if(count1==0)
            res[i]=-1;
        else
            res[i]=sma;
    }
    res[N]=-1;
    for(int i=1;i<=N;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}