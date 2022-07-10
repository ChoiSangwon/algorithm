#include<iostream>
#include<vector>
using namespace std;
double arr[26]={0,};
string arr2;

int main(){
    int N;
    vector<double> a;
    cin>>N>>arr2;
    cout<<fixed;
    cout.precision(2);
    for(int i=0;i<N;i++) cin>>arr[i];
    for(int i=0;i<arr2.length();i++){
        if(arr2[i]>='A'&&arr2[i]<='Z') a.push_back(arr[arr2[i]-'A']);
        else{
            double tmp1,tmp2;
            tmp2=a.back();
            a.pop_back();
            tmp1=a.back();
            a.pop_back();
            if(arr2[i]=='+') a.push_back(tmp1+tmp2);
            else if(arr2[i]=='-') a.push_back(tmp1-tmp2);
            else if(arr2[i]=='/') a.push_back(tmp1/tmp2);
            else if(arr2[i]=='*') a.push_back(tmp1*tmp2);
        }
    }
    cout<<a[0]<<endl;
}