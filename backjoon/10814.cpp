#include<iostream>
#include<string.h>
using namespace std;

class ssort{
public:
    int num;
    int age;
    string name;
}Ssort;

int main(){
    int N;
    ssort arr[N];
    for(int i=0;i<N;i++){
        arr[i].num=i;
        cin>>arr[i].age>>arr[i].name;
    }
    for(int i=0;i<N;i++)
        cout<<arr[i].age<<" "<<arr[i].name<<endl;
}