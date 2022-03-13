#include<iostream>
#include<cstring>
using namespace std;
char arr[51];

int main(){
    cin>>arr;
    int len=strlen(arr),i,j;
    for(i=0;i<len;i++){
        char cmp[51],res[51];
        int t=0,count1=0;
        for(j=i;j<=len;j++){
            cmp[t++]=arr[j];
        }
        count1=0;
        for(int k=0;k<(t-1)/2;k++){
            if(cmp[k]!=cmp[t-2-k])
                count1++;
        }
        if(count1==0)
            break;
        cout<<cmp<<" "<<t<<endl;
    }
    cout<<len+i<<endl;
}