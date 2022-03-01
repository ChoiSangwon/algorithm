#include<iostream>
using namespace std;
int main(){
    char arr[31][60],check[150]={0,};
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        getchar();
        int j=0;
        while(1){
            arr[i][j]=getchar();
            if(arr[i][j]=='\n'){
                arr[i][j]='\0';
                break;
            }
            j++;
        }
        if(check[arr[i][0]]==0){
            check[arr[i][0]]=1;
            cout<<"["<<arr[i][0]<<"]";
            for(int k=1;k<j;i++)
                cout<<arr[i][k];
        }
        cout<<endl;

    }
}