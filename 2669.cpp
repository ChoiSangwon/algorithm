#include<stdio.h>
int main(){
    int res[101][101]={0,},x[4];
    for(int t=0;t<4;t++){
        for(int i=0;i<4;i++){
            scanf("%d",&(x[i]));
        }
        for(int j=x[0];j<x[2];j++){
            for(int k=x[1];k<x[3];k++){
                res[j][k]=1;
            }
        }
    }
    int sum=0;
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            if(res[i][j]==1)
                sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}