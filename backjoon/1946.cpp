#include<iostream>
using namespace std;
int a[100001];

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int T,N,count,ma;
    cin>>T;
    for(int i=0;i<T;i++){
        ma=0;
        cin>>N;
        for(int j=1;j<=N;j++){
            int b,c;
            cin>>b>>c;
            a[b]=c;
        }
        count=a[1];
        ma++;
        for(int j=2;j<=N;j++){
            if(count>a[j]){
                count=a[j];
                ma++;
            }
        }
        cout<<ma<<endl;
    }
}