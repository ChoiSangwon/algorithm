#include<iostream>
using namespace std;
int main(){
    int N,countY=0,countM=0;
    cin>>N;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        countY+=(a/30+1)*10;
        countM+=(a/60+1)*15;
    }
    if(countY==countM)
        cout<<"Y "<<"M "<<countM<<endl;
    else if(countY<countM)
        cout<<"Y "<<countY<<endl;
    else
        cout<<"M "<<countM<<endl;
    
}
