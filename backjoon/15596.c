#include<stdio.h>
int main(){
    int N;
}

int sum(int n,int* a){
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    return sum;
}