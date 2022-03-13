#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[600000],order,non;
    cin>>arr;
    int size=strlen(arr),M,index;
    index=size;
    cin>>M;
    for(int i=0;i<M;i++){
        cin>>order;
        switch (order)
        {
        case 'L':
            if(index!=0)
                index--;
            break;
        case 'P':
            cin>>non;
            size++;
            for(int j=size;j>index;j--)
                arr[j]=arr[j-1];
            arr[index++]=non;
            break;
        case 'D':
            if(index!=size)
                index++;
            break;
        case 'B':
            if(index!=0){
                for(int j=index;j<size;j++)
                    arr[j-1]=arr[j];
                size--;
                index--;
            }
            break;
        default:
            break;
        }
        for(int i=0;i<size;i++)
            cout<<arr[i];
        cout<<endl;
    }
    for(int i=0;i<size;i++)
        cout<<arr[i];
    cout<<endl;
}