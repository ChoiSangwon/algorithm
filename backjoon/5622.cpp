#include<stdio.h>
#include<string.h>
int main(){
    char a[15];
    int count=0;
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='A'||a[i]=='B'||a[i]=='C')
            count+=3;
        else if(a[i]=='D'||a[i]=='E'||a[i]=='F')
            count+=4;
        else if(a[i]=='G'||a[i]=='H'||a[i]=='I')
            count+=5;
        else if(a[i]=='J'||a[i]=='K'||a[i]=='L')
            count+=6;
        else if(a[i]=='M'||a[i]=='N'||a[i]=='O')
            count+=7;
        else if(a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S')
            count+=8;
        else if(a[i]=='T'||a[i]=='U'||a[i]=='V')
            count+=9;
        else if(a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z')
            count+=10;
    }
    printf("%d\n",count);
}