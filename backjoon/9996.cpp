#include<stdio.h>
#include<string.h>
int main(){
    int N,arrlen,arr2len,first,last;
    char arr[101];
    scanf("%d",&N);
    scanf("%s",arr);
    arrlen=strlen(arr);
    first=arr[0];
    last=arr[arrlen-1];
    for(int i=0;i<N;i++){
        char arr2[101];
        scanf("%s",arr2);
        arr2len=strlen(arr2);
        if(last==first&&arr2len==1){
            printf("NE\n");
            continue;
        }
        if(arr2[0]==first&&arr2[arr2len-1]==last)
            printf("DA\n");
        else
            printf("NE\n");
    }
}