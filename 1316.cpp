#include<stdio.h>
#include<string.h>
int main(){
    int N;
    int alpha[26],sum=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int boo=0;
        for(int k=0;k<26;k++)
            alpha[k]=0;
        char arr[101];
        scanf("%s",arr);
        for(int j=0;j<strlen(arr);j++){
            if(alpha[arr[j]-97]==0){
                alpha[arr[j]-97]=1;
            }
            else if(alpha[arr[j]-97]!=0&&j!=0&&arr[j]!=arr[j-1]){
                boo=1;
                break;
            }
        }
        if(boo==0)
            sum++;
    }
    printf("%d\n",sum);
}