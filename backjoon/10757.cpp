#include<stdio.h>
#include<string.h>
int main(){
    char arr1[100],arr2[100],arr3[100];
    int up=0,count=0;
    scanf("%s",arr1);
    scanf("%s",arr2);
    int k=0;
    for(int i=strlen(arr1)-1,j=strlen(arr2)-1;i>=0||j>=0;i--,j--){
        if(j<0){
            arr3[k]=arr1[i]+up;
            up=0;
        }
        else if(i<0){
            arr3[k]=arr2[j]+up;
            up=0;
        }
        else{
            count=(arr1[i]-'0')+(arr2[j]-'0');
            if(count>9){
                if((j==0&&i==0)||(i<0&&j==0)||(j<0&&i==0)){
                    count-=10;
                    arr3[k]=(count+up)+'0';
                    k++;
                    arr3[k]='1';
                }
                else{
                    count-=10;
                    arr3[k]=(count+up)+'0';
                    up=1;
                }
            }
            else{
                arr3[k]=(count+up)+'0';
                up=0;
            }
        }
        k++;
    }
    for(int i=k-1;i>=0;i--){
        printf("%c",arr3[i]);
    }
    printf("\n");
}