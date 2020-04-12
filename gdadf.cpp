#include<iostream>
using namespace std;
int main(){
    int a[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            int c=0;
            a[i][j]=rand()%9+1;
            for(int k=0;k<j;k++){
                if(a[i][j]==a[i][k]){
                    c=1;
                    j--;
                    break;
                }
            }
            if(c==1)
                continue;
            for(int k=0;k<i;k++){
                if(a[i][j]==a[k][j]){
                    c=1;
                    j--;
                    break;
                }
            }
            if(c==1)
                continue;
        }
        for(int j=0;j<9;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    /*for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
}