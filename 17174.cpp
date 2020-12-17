#include<stdio.h>
int main(){
    int N,M,res=0;
    scanf("%d %d",&N,&M);
    res+=N;
    while(N>=M){
        res+=N/M;
        N=N/M;
    }
    printf("%d\n",res);
    return 0;
}