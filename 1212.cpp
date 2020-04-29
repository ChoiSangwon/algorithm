#include<stdio.h>
#include<stdlib.h>
int main(){
    char N[6];
    int arr[8],b,mok,num,nmg;
    scanf("%s",N);
    unsigned long n = strtoul(N, NULL, 8);
    b=-1;
    do{
        b++;
        mok=num/2;
        nmg=num-mok*2;
        arr[b]=nmg;
    num=mok;
    }while(mok!=0);
    for(int i=b;i>=0;i--)
        printf("%d",arr[i]);
}