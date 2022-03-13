#include<iostream>
using namespace std;
int arr[1000001];

int cmp(const void *a , const void*b){
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>arr[i];
    qsort(arr,N,sizeof(int),cmp);

    bool ans=false;
    int i,j,k;
    for(i=0;i<N-2;i++){
        if(arr[i]<arr[i+1]+arr[i+2]){
            cout<<arr[i]+arr[i+1]+arr[i+2];
            return 0;
        }
    }
    cout<<"-1"<<endl;

}