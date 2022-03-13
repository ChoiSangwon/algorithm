#include<stdio.h>
#include<string.h>
int main(){
    int N;
    char arr[N][50],*temp;
    for(int i=0;i<N;i++)
        scanf("%s",arr[i]);
    for(int i=0;i<N-1;i++){
        for(int j=i;j<N;j++){
            if(strlen(arr[i])>strlen(arr[j])){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}