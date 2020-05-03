#include<stdio.h>
int main(){
    char arr[101];
    scanf("%s",arr);
    int i=0;
    while(arr[i]!='\0') i++;
    printf("%d\n",i);
}