#include<stdio.h>
#include<string.h>
int main(){
    int N,len;
    char arr[51],anw[51];
    scanf("%d",&N);
    scanf("%s",anw);
    len=strlen(anw);
    for(int i=0;i<N-1;i++){
        scanf("%s",arr);
        for(int j=0;j<len;j++){
            if(anw[j]!=arr[j])
                anw[j]='?';
        }
    }
    printf("%s\n",anw);
}