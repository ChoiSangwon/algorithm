#include<stdio.h>
#include<string.h>
int main(){
    char arr[6];
    int len=0;
    while(1){
        int cmp=0;
        scanf("%s",arr);
        if(strcmp(arr,"0")==0)
            break;
        len = strlen(arr);
        for(int i=0;i<len;i++){
            if(arr[i]!=arr[len-i-1])
                cmp++;
        }
        if(cmp==0)
            printf("yes\n");
        else
            printf("no\n");

    }
}