#include<iostream>
#include<cstring>
using namespace std;
int alpha[26]={0,};
int spacebar;
string res;
char arr[10000];


int main(){
    cin.getline(arr,10000,'\n');
    cin>>spacebar;
    for(int i=0;i<26;i++)
        cin>>alpha[i];

    bool check1=false;
    int i=0;
    while(arr[i]!='\0'){
        //cout<<arr[i]<<endl;
        if(arr[i]==' '){
            spacebar--;
            if(spacebar<0){
                check1=true;
                break;
            }
            i++;
            continue;
        }
        if(arr[i-1]==' '||i==0){
            if('A'<=arr[i]&&'Z'>=arr[i]){
                res+=arr[i];
                alpha[arr[i]-'A']--;
                if(alpha[arr[i]-'A']<0){
                    check1=true;
                    break;
                }
            }
            else if('a'<=arr[i]&&'z'>=arr[i]){
                res+=arr[i]-32;
                alpha[arr[i]-'a']--;
                if(alpha[arr[i]-'a']<0){
                    check1=true;
                    break;
                }
            }
            i++;
            continue;
        }
        if(arr[i-1]==arr[i]&&arr[i]!=' '){
            i++;
            continue;
        }
        if('A'<=arr[i]&&'Z'>=arr[i]){
            alpha[arr[i]-'A']--;
            if(alpha[arr[i]-'A']<0){
                check1=true;
                break;
            }
        }else if('a'<=arr[i]&&'z'>=arr[i]){
            alpha[arr[i]-'a']--;
            if(alpha[arr[i]-'a']<0){
                check1=true;
                break;
            }
        }
        i++;
    }
    for(int j=0;j<res.length();j++){
        if(j!=0&&res[j-1]==res[j])
            continue;
        alpha[res[j]-'A']--;
        if(alpha[res[j]-'A']<0){
            check1=true;
            break;
        }
    }
    if(check1)
        cout<<-1<<endl;
    else{
        cout<<res<<endl;
    }
}