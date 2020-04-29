#include<stdio.h>
int main(){
    int N10,N12,N16;
    for(int i=1000;i<10000;i++){
        N10=N12=N16=0;
        for(int j=i;j>0;j/=10)
            N10+=j%10;
        for(int j=i;j>0;j/=12)
            N12+=j%12;
        for(int j=i;j>0;j/=16)
            N16+=j%16;
        if(N10==N12&&N12==N16)
            printf("%d\n",i);
    }
}