#include<iostream>
using namespace std;

int sumD(int i, int j, int *arr){
    int sum=0;
    for(int k=i;k<=j;k++)
        sum+=arr[k];
    return sum;
}

int main(){
    int N,M,i=0,j=0,sum=0,check=0,a=0;
    cin>>N>>M;
    int arr[N];
    for(int k=0;k<N;k++){
        cin>>arr[k];
    }
    for(;;){
        i=0;
        j=a;
        if(i==0&&j==N-1)
            break;
        for(;j<N;i++,j++){
            sum = sumD(i,j,arr);
            if(sum==M)
                check++;
        }
        a++;
    }
    cout<<check<<endl;

}
