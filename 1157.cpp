#include<stdio.h>
#define MAX 1000001
int main(){
    char str[MAX];
    int cnt[26]={0,},i;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]<97)
            str[i]+=32;
        cnt[str[i]-'a']++;
    }
    int max=cnt[0],maxcount,index;
    for(int i=1;i<26;i++){
        if(cnt[i]>max){
            max=cnt[i];
            index=i;
        }
        else if(cnt[i]==max&&cnt[i]!=0)
            maxcount=-1;
    }
    if(maxcount!=-1)
        printf("%c\n",index+65);
    else
        printf("?\n");
}