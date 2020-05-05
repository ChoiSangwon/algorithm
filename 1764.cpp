#include<stdio.h>
#include<string.h>
int main(){
    int N,M,count=0;
    scanf("%d%d",&N,&M);
    char arr1[N][21],arr2[M][21],arr[N*M][21];
    for(int i=0;i<N;i++)
        scanf("%s",arr1[i]);
    for(int i=0;i<M;i++)
        scanf("%s",arr2[i]);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(strcmp(arr1[i],arr2[j])==0){
                strcpy(arr[count],arr1[i]);
                count++;
            }
        }    
    }
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count;j++){
            char *temp;
            if(strcmp(arr[i],arr[j])==1)
        
        }
    }
    
}