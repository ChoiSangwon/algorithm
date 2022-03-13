#include<stdio.h>
#include<stack>
using namespace std;
int main(){
    int sum=0,i=0;
    stack<char> arr;
    char a[100001];
    scanf("%s",a);
    while(1){
        if(a[i]=='\0')
            break;
        if(a[i]=='(')
            arr.push(a[i]);
        else{
            if(a[i-1]==')'){
                arr.pop();
                sum++;
            }
            else{
                arr.pop();
                sum+=arr.size();
            }
        }
        i++;
    }
    printf("%d\n",sum);
}