#include<iostream>
using namespace std;
int arr[100001];

int compair(const void * a,const void *b){
    int num1=*(int *)a;
    int num2=*(int *)b;
    if(num1<num2)
        return 1;
    else if(num1>num2)
        return -1;
    else
        return 0;
}



int main(){
    int N,max=0;
    cin>>N;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,N,sizeof(int),compair);
    for(int i=0;i<N;i++){
        if((i+1)%3==0)
            continue;
        max+=arr[i];
    }
    cout<<max<<endl;
}