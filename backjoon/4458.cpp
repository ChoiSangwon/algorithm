#include<stdio.h>
int main(){
    int N;
    char arr[100][31];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        getchar();
        scanf("%[^\n]",arr[i]);
    }
    for(int i=0;i<N;i++){
        if(arr[i][0]>=97)
        arr[i][0]=arr[i][0]-32;
    }
    for(int i=0;i<N;i++){
        printf("%s\n",arr[i]);
    }
}