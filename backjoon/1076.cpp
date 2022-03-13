#include<stdio.h>
#include<string.h>
long long check(char arr[10],int a);
int main(){
    long long result,result2,result3;
    char arr[10],arr2[10],arr3[10];
    scanf("%s",arr);
    result=check(arr,0);
    result*=10;
    scanf("%s",arr2);
    result2=check(arr2,0);
    result+=result2;
    scanf("%s",arr3);
    result3=check(arr3,1);
    result*=result3;
    printf("%lld\n",result);
}

long long check(char arr[10],int a){
    int result;
    if(a==0){
        if(strcmp(arr,"black")==0)
            result=0;
        else if(strcmp(arr,"brown")==0)
            result=1;
        else if(strcmp(arr,"red")==0)
            result=2;
        else if(strcmp(arr,"orange")==0)
            result=3;
        else if(strcmp(arr,"yellow")==0)
            result=4;
        else if(strcmp(arr,"green")==0)
            result=5;
        else if(strcmp(arr,"blue")==0)
            result=6;
        else if(strcmp(arr,"violet")==0)
            result=7;
        else if(strcmp(arr,"grey")==0)
            result=8;
        else if(strcmp(arr,"white")==0)
            result=9;
    }
    else
    {
        if(strcmp(arr,"black")==0)
            result=1;
        else if(strcmp(arr,"brown")==0)
            result=10;
        else if(strcmp(arr,"red")==0)
            result=100;
        else if(strcmp(arr,"orange")==0)
            result=1000;
        else if(strcmp(arr,"yellow")==0)
            result=10000;
        else if(strcmp(arr,"green")==0)
            result=100000;
        else if(strcmp(arr,"blue")==0)
            result=1000000;
        else if(strcmp(arr,"violet")==0)
            result=10000000;
        else if(strcmp(arr,"grey")==0)
            result=100000000;
        else if(strcmp(arr,"white")==0)
            result=1000000000;
    }
    
    return result;
}