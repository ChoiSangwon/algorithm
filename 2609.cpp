#include<stdio.h>
int main(){
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    if(a>b){
        i=b;
        while(1){
            if(b%i==0&&a%i==0)
                break;
            i--;
        }
        j=a;
        while(1){
            if(j%a==0&&j%b==0)
                break;
            j++;
        }
        printf("%d\n%d\n",i,j);
    }
    else{
        i=a;
        while(1){
            if(b%i==0&&a%i==0)
                break;
            i--;
        }
        j=b;
        while(1){
            if(j%a==0&&j%b==0)
                break;
            j++;
        }
        printf("%d\n%d\n",i,j);
    }
    
    
}