#include<iostream>
using namespace std;
int main(){
    int arr[5],result,count;
    for(int i=0;i<5;i++)
        cin>>arr[i];
    while(1){
        count=0;
        for(int i=0;i<5;i++){
            if(result>=arr[i]&&result%arr[i]==0)
                count++;
        }
        if(count>=3)
            break;
        result++;
    }
    cout<<result<<endl;
}