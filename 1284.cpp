#include<stdio.h>
#include<string.h>
int main(){
    char arr[5];
    while(1){
        int count=0;
        scanf("%s",arr);
        if(strcmp(arr,"0")==0)
            break;
        int len=strlen(arr);
        for(int i=0;i<len;i++){
            if(arr[i]=='1')
                count+=2;
            else if(arr[i]=='0')
                count+=4;
            else 
                count+=3;
            count++;
        }
        count++;
        printf("%d\n",count);
    }
}