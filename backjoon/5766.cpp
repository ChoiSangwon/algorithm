#include<iostream>
using namespace std;
int main(){
    int N,M,temp;
    while(1){
        int arr[10001]={0,};
        cin>>N>>M;
        if(N==0&&M==0)
            break;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>temp;
                arr[temp]++;
            }
        }
        int maxindex=0,res=0;
        for(int i=1;i<10001;i++){ //제일 높은값 인덱스 구하기
            if(maxindex<arr[i])
                maxindex=arr[i];
        }
        for(int i=1;i<10001;i++){  //두번째로 높은 값 구하기
            if(res<arr[i]&&arr[i]!=maxindex)
                res=arr[i];
        }
        for(int i=1;i<10001;i++){  //두번째로 높은 값 구하기
            if(res==arr[i])
                cout<<i<<" ";
        }
        cout<<endl;
    }
    
}