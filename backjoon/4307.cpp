#include<iostream>
using namespace std;
int main(){
    int N,mina,maxa;
    cin>>N;
    for(int i=0;i<N;i++){
        int a,b,c,d;
        cin>>a>>b;
        maxa=0;
        mina=0;
        for(int j=0;j<b;j++){
            cin>>d;
            if(a%2==0)
            c=a/2;
            else
            c=a/2+1;
            if(d>c)
                mina=max(mina,a-d);
            else
                mina=max(mina,d);
            if(d>c)
                maxa=max(maxa,d);
            else
                maxa=max(maxa,a-d);
        }
        cout<<mina<<" "<<maxa<<endl;
    }
}