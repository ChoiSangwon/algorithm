#include<iostream>
using namespace std;
bool swit[101]={0,};
int main(){
    int N,S;
    cin>>N;
    for(int i=1;i<=N;i++){
        int a;
        cin>>a;
        if(a==1)
            swit[i]=true;
        else
            swit[i]=false;
    }
    cin>>S;
    for(int i=0;i<S;i++){
        int a,b;
        cin>>a>>b;
        if(a==1){
            for(int j=b;j<=N;j+=b){
                swit[j]= !(swit[j]);
            }
        } else{
            if(N/2>b){
                for(int k=b,q=b;k>0;k--,q++){
                    if(k==q){
                        swit[k]= !(swit[k]);
                    }
                    else if(swit[k]==swit[q]){
                        swit[k]= !(swit[k]);
                        swit[q]= !(swit[q]);
                    } else {
                        break;
                    }
                }
            } else {
                for(int k=b,q=b;k<=N;k++,q--){
                    if(k==q){
                        swit[k]= !(swit[k]);
                    }
                    else if(swit[k]==swit[q]){
                        swit[k]= !(swit[k]);
                        swit[q]= !(swit[q]);
                    } else {
                        break;
                    }
                }
            }
        }

    }
    for(int i=0;i<N;i++){
        if(i%20==0&&i!=0)
            cout<<endl;
        cout<<swit[i+1]<<" ";
    }
    cout<<endl;
}