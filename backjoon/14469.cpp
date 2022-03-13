#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int compair(const void *a,const void *b){
    pair<int,int> num1=*(pair<int,int> *)a;
    pair<int,int> num2=*(pair<int,int> *)b;
    if(num1.first>num2.first)
        return 1;
    else if(num1.first<num2.first)
        return -1;
    else
        return 0;
}

int main(){
    int N,res=0;
    pair<int,int> a[101];
    cin>>N;
    for(int i=0;i<N;i++){
        int b,c;
        cin>>b>>c;
        a[i]=make_pair(b,c);
    }

    qsort(a,N,sizeof(pair<int,int>),compair);
    for(int i=0;i<N;i++){
        if(a[i].first>res)
            res=a[i].first;
        res+=a[i].second;
    }
    cout<<res<<endl;

}