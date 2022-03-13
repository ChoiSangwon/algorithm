#include<iostream>
using namespace std;
int main(){
    int X;
    int i=1,j=1,H=1,check=0;
    cin>>X;
    while(check<X){
        if(H%2==0){
            i=0;
            j=H+1;
            for(int f=1;f<H+1;f++){
                i++;
                j--;
                check++;
                if(check>=X)
                    break;
            }
        }
        else{
            i=H+1;
            j=0;
            for(int f=1;f<H+1;f++){
                i--;
                j++;
                check++;
                if(check>=X)
                    break;
            }
        }
        H++;
    }
    cout<<i<<"/"<<j<<endl;
}