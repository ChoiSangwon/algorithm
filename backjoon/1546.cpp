#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int a[N],maxval=0;
    float sum=0.0;
    for(int i=0;i<N;i++){
        cin>>a[i];
        maxval=max(maxval,a[i]);
    }
    for(int i=0;i<N;i++){
        sum+=((float)a[i]/maxval)*100;
    }
    sum=sum/N;
    cout<<sum<<endl;
}