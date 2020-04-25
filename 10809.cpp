#include<stdio.h>
#include<string.h>
int main(){
    char S[100],arr[26];
    scanf("%s",S);
    for(int i=0;i<26;i++)
        arr[i]=-1;
    for(int i=0;i<strlen(S);i++){
        if(arr[S[i]-97]==-1)
            arr[S[i]-97]=i;
    }
    for(int i=0;i<26;i++)
        printf("%d ",arr[i]);
    printf("\n");
}