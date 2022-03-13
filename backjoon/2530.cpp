#include<iostream>
using namespace std;
int main(){
    int hour,min,sec,num;
    cin>>hour>>min>>sec;
    cin>>num;
    hour+=num/3600;
    num-=(num/3600)*3600;
    min+=num/60;
    num-=(num/60)*60;
    sec+=num;
    while(hour>=24||min>=60||sec>=60){
        if(hour>=24){
            hour-=24;
        }
        if(min>=60){
            min-=60;
            hour++;
        }
        if(sec>=60){
            sec-=60;
            min++;
        }
    }
    cout<<hour<<" "<<min<<" "<<sec<<endl;
}