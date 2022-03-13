#include<stdio.h>
#include<string.h>
int main(){
    char a[101],b[101],c;
    scanf("%s",a);
    while(getchar()!='\n'){}
    scanf("%c",&c);
    scanf("%s",b);
    int alen=strlen(a)-1,blen=strlen(b)-1;
    if(c=='*'){
        printf("1");
        for(int i=0;i<alen+blen;i++)
            printf("0");
        printf("\n");
    }
    else{
        if(alen==blen){
            printf("2");
            for(int i=0;i<alen;i++)
                printf("0");
        }
        else if(alen<blen){
            printf("1");
            for(int i=0;i<blen;i++){
                if(i==(blen-alen)-1)
                    printf("1");
                else
                    printf("0");
            }
        }
        else{
            printf("1");
            for(int i=0;i<alen;i++){
                if(i==(alen-blen)-1)
                    printf("1");
                else
                    printf("0");
            }
        }
        
    }

}