#include<stdio.h>
#include<string.h>
int main(){
    char arr[101],arr2[101];
    scanf("%s",arr);
    scanf("%s",arr2);
    int arrLen=strlen(arr), arr2Len=strlen(arr2), check=0;;
    for(int i=0;i<arrLen;i++){
        check=0;
        if(arr[i]==arr2[0]){
            for(int j=0;j<arr2Len;j++){
                if(arr[i+j]==arr2[j])
                    check++;
                else
                    break;
            }
        }
        if(check==arr2Len)
            break;
    }
    if(check==arr2Len)
        printf("1\n");
    else
        printf("0\n");
}