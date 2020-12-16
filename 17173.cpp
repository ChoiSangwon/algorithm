#include<stdio.h>
int main(){
    int N,M,res=0;
    scanf("%d %d",&N,&M);
    int arr[M];
    for(int i=0;i<M;i++)
        scanf("%d",&(arr[i]));
    for(int i=0;i<M;i++){
        int a=arr[i];
        while(a<=N){
            res+=a;
            a+=arr[i];
        }
    }
    printf("%d\n",res);
    return 0;
}