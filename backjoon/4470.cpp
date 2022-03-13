#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    getchar();
    for(int i=0;i<N;i++){
        char arr[51];
        printf("%d. ",i+1);
        scanf("%[^\n]",arr);
        printf("%s\n",arr);
        getchar();
    }
}