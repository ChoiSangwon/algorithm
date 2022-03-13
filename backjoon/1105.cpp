#include<iostream>
using namespace std;
int main(){
    int L,R,a,count,min=0;
    cin>>L>>R;
    for(int i=L;i<=R;i++){
        a=i;
        count=0;
        while(a>0){
            if(a%10==8)
                count++;
            a/=10;
        }
        if(i==L)
            min=count;
        else if(count<min)
            min=count;
        //if(min==0)
           // break;
    }
    cout<<min<<endl;
}