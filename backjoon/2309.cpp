#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[9],result[7],max=0,i,j,sum,flag;
    for(i=0;i<9;i++)
        cin>>arr[i];
    flag=0;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(j!=i){
                sum=0;
                for(int k=0;k<9;k++){
                    if(k!=i&&k!=j)
                        sum+=arr[k];
                }
                if(sum==100){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            break;
    }
    int p=0;
    for(int k=0;k<9;k++){
        if(k!=i&&k!=j)
            result[p++]=arr[k];
    }
    sort(result,result+7);
    for(int k=0;k<7;k++)
        cout<<result[k]<<endl;
}