#include<stdio.h>
#include<string.h>
int main(){
    char arr[101];
    scanf("%s",arr);
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]>='A'&&arr[i]<='Z')
            printf("%c",arr[i]);
    }
    printf("\n");
}