#include<iostream>
using namespace std;
int main(){
    int a[3],b[2],sum;
    cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1];
    sum=a[0]+b[0]-50;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(a[i]+b[j]-50<sum)
                sum=a[i]+b[j]-50;
        }
    }
    cout<<sum<<endl;
}