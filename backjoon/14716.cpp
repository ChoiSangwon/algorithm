#include<stdio.h>
int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    int arr[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&(arr[i][j]));
        }
    }
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j]==1){
                count++;
                arr[i][j]=2;
                while(1){
                    if(i>0&&arr[i-1][j]==1)
                        i--;
                    else if(i<N-1&&arr[i+1][j]==1)
                        i++;
                    else if(j>0&&arr[i][j-1]==1)
                        j--;
                    else if(j<M-1&&arr[i][j+1]==1)
                        j++;
                    else if(j<0&&i<0&&arr[i-1][j-1]==1){
                        i--;
                        j--;
                    }
                    else if(j<0&&i>N-1&&arr[i+1][j-1]==1){
                        i++;
                        j--;
                    }
                    else if(j>M-1&&i<0&&arr[i-1][j+1]==1){
                        i--;
                        j++;
                    }
                    else if(j>M-1&&i>N-1&&arr[i-1][j-1]==1){
                        i++;
                        j++;
                    }
                    else
                        break;
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;
}