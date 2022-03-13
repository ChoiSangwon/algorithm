#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[1000002];
    cin.getline(arr,1000002,'\n');
    int size=strlen(arr);
    int count=0;
    for(int i=1;i<size-1;i++){
        if(arr[i]==' ')
            count++;
    }
    count++;
    cout<<count<<endl;
}