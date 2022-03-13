#include<stdio.h>
#include<string.h>
int main(){
    char arr[101];
    scanf("%s",arr);
    int len=strlen(arr),count=0;
    for(int i=0;i<len;i++){
        if(arr[i]=='c'){
            if(arr[i+1]=='='){
                i++;
                count++;
            }
            else if(arr[i+1]=='-'){
                i++;
                count++;
            }
            else
                count++;
        }
        else if(arr[i]=='d'){
            if(arr[i+1]=='-'){
                i++;
                count++;
            }
            else if(arr[i+1]=='z'){
                if(arr[i+2]=='='){
                    i+=2;
                    count++;
                }
                else
                    count++;
            }
            else
                count++;
            
        }
        else if(arr[i]=='l'){
            if(arr[i+1]=='j'){
                i++;
                count++;
            }
            else
                count++;
        }
        else if(arr[i]=='n'){
            if(arr[i+1]=='j'){
                i++;
                count++;
            }
            else
                count++;
        }
        else if(arr[i]=='s'){
            if(arr[i+1]=='='){
                i++;
                count++;
            }
            else
                count++;
        }
        else if(arr[i]=='z'){
            if(arr[i+1]=='='){
                i++;
                count++;
            }
            else
                count++;
        }
        else
            count++;
    }
    printf("%d\n",count);
}