#include<stdio.h>
#include<string.h>
int main(){
    char arr[9];
    while(1){
        scanf("%s",arr);
        if(strcmp(arr,"#")==0)
            break;
        int a=1,len,sum=0;
        len=strlen(arr);
        for(int i=len-1;i>=0;i--,a*=8){
            if(arr[i]=='-')
                sum+=a*0;
            else if(arr[i]=='\\')
                sum+=a*1;
            else if(arr[i]=='(')
                sum+=a*2;
            else if(arr[i]=='@')
                sum+=a*3;
            else if(arr[i]=='?')
                sum+=a*4;
            else if(arr[i]=='>')
                sum+=a*5;
            else if(arr[i]=='&')
                sum+=a*6;
            else if(arr[i]=='%')
                sum+=a*7;
            else if(arr[i]=='/')
                sum+=a*(-1);
        }
        printf("%d\n",sum);
    }
}