#include<stdio.h>
#include<string.h>
int main(){
    char arr[101];
    scanf("%s",arr);
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]>='A'&&arr[i]<='Z')
            arr[i]+=32;
        else
            arr[i]-=32;
    }
    printf("%s\n",arr);
}