#include<stdio.h>
int main(){
    int N,result=1;
    scanf("%d",&N);
    for(int i=N;i>0;i--)
        result*=i;
    printf("%d\n",result);
}