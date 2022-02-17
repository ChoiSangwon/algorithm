#include<iostream>
using namespace std;
int cmp(const void * a,const void * b){
    int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;

    if(num1>num2)
        return 1;
    else if(num2>num1)
        return -1;
    else
        return 0;
}

int main(){
    int N,arr[500000];
    long long res=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    qsort(arr,N,sizeof(int),cmp);
    for(int i=0;i<N;i++){
        if(arr[i]-(i+1)>0)
            res+=arr[i]-(i+1);
        else
            res+=(i+1)-arr[i];
        //cout<<arr[i];
        //cout<<" res : "<<res<<endl;
        //cout<<arr[i]<<endl;
    }
    cout<<res<<endl;
}