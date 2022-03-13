#include<iostream>
using namespace std;
int main(){
    while(1){
        int arr[16];
        int i,count=0;
        for(i=0;;i++){
            cin>>arr[i];
            if(arr[i]==-1||arr[i]==0)
                break;
        }
        if(arr[0]==-1)
            break;
        //i--;
        for(int j=0;j<i;j++){
            for(int k=0;k<i;k++){
                if(arr[k]==2*arr[j])
                    count++;
            }
        }
        cout<<count<<endl;
    }
}