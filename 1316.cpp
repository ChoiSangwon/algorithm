#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int N,count=0;
    cin>>N;
    for(int i=0;i<N;i++){
        char arr[100],chr[100];
        int k=0,bee;
        cin>>arr;
        bee=0;
        for(int j=1;j<strlen(arr);j++){
            if(arr[j-1]!=arr[j])
                chr[k++]=arr[j-1];
            else{
                for(int a=0;a<k;a++){
                    if(arr[j-1]==chr[a]){
                        bee++;
                        break;
                    }
                }
            }
        }
        if(bee==0)
                count++;
    }
    cout<<count<<endl;
}