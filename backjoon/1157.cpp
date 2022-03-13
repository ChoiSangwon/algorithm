#include<stdio.h>

int main(){
    char str[1000001];
    int cnt[26]={0,},i;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]<97)
            str[i]+=32;
        cnt[str[i]-97]++;
    }
    int max=cnt[0],index=0;
    for(int i=1;i<26;i++){
        if(cnt[i]>max){
            max=cnt[i];
            index=i;
        }
        else if(cnt[i]==max&&cnt[i]!=0)
            index=-1;
    }
    if(index!=-1)
        printf("%c\n",index+65);
    else
        printf("?\n");
}