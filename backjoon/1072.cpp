#include<iostream>
using namespace std;
int main(){
    long long Y;
    int X,Z;
    cin>>X>>Y;
    Z=(Y*100)/X;
    if(Z>=99){
        cout<<-1<<endl;
        return 0;
    }
    int mid=0,left=0,right=1000000000,res=0;
    while(left<=right){
        mid=(left+right)/2;
        res=((Y+mid)*100)/(X+mid);
        if(Z<res)
            right=mid-1;
        else
            left=mid+1;
    }
    cout<<left<<endl;
}