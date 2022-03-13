#include<iostream>
using namespace std;
int arr[100001]={0,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,S,mina=0,res;
    cin>>N>>S;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        if(a-S>0)
            arr[i]=a-S;
        else
            arr[i]=S-a;
    }
    mina=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i]<mina)
            mina=arr[i];
    }
    int check;
    for(int i=mina;i>=1;i--){
        check=0;
        for(int j=0;j<N;j++){
            if(arr[j]%i!=0){
                check=1;
                break;
            }
        }
        if(check==0){
            res=i;
            break;
        }
    }
    cout<<res<<endl;


}