#include<stdio.h>
#include<string.h>
int main(){
    while(1){
        char arr[251],input;
        scanf("%c",&input);
        if(input=='#')
            break;
        scanf("%[^\n]",arr);
        int len=strlen(arr),count=0;
        for(int i=0;i<len;i++){
            if(arr[i]==input||arr[i]==input-32)
                count++;
        }
        printf("%c %d\n",input,count);
        while(getchar()!='\n'){}
    }
}