#include<stdio.h>
#include<string.h>
int main(){
    int N,count=1,sum=0;
    scanf("%d",&N);
    char arr[N][80];
    for(int i=0;i<N;i++){
        scanf("%s",arr[i]);
        for(int j=0;j<strlen(arr[i]);j++){
            if(arr[i][j]=='X'){
                count=1;
            }
            else if(arr[i][j]=='O'){
                sum+=count;
                count++;
            }
        }
        printf("%d\n",sum);
        sum=0;
        count=1;
    }
}