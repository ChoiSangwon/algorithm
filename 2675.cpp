#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int R;
        char S[20];
        cin>>R>>S;
        int len=strlen(S);
        for(int j=0;j<len;j++){
            for(int k=0;k<R;k++){
                cout<<S[j];
            }
        }
        cout<<endl;
    }
}