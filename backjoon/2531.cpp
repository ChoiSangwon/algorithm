#include<iostream>
using namespace std;
int N,d,k,c;
int arr1[60001]={0,};

int solve(int i, int j){
    //memset(arr,0,sizeof(int)*3000);
    int arr[3001]={0,};
    int res=0;
    for(int a=i;a<j;a++){
        // cout<<arr1[a]<<" "<<endl;
        if(arr[arr1[a]]!=0)
            continue;
        else{
            arr[arr1[a]]++;
            res++;
        }
    }
    // cout<<endl;
    if(arr[c]==0)
        res++;
    return res;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    int maxres=0;
    
    cin>>N>>d>>k>>c; // N : 접시개수, d : 초밥의 가짓수 , k : 연속해서 먹는 접시 수, c : 쿠폰 번호
    for(int i=0;i<N;i++){
        cin>>arr1[i];
        arr1[i+N]=arr1[i];
    }
    
    for(int i=0;i<N;i++){
        maxres=max(solve(i,i+k),maxres);
        // cout<<"maxres : "<<maxres<<endl;
    }
    cout<<maxres<<endl;
}