#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        char arr1[15],arr2[7],date1[5],date2[5];
        int a[2],b[2];
        cin>>arr1>>arr2;
        //cout<<arr1<<endl<<arr2<<endl;
        for(int i=0,j=0;i<5;i++,j++){
            if(i==2){
                j--;
                continue;
            }
            date1[j]=arr1[i];
            date2[j]=arr2[i];
        }
        a[0]=date1[1]-'0';
        a[0]+=(date1[0]-'0')*10;
        b[0]=date2[1]-'0';
        b[0]+=(date2[0]-'0')*10;
        a[1]=date1[3]-'0';
        a[1]+=(date1[2]-'0')*10;
        b[1]=date2[3]-'0';
        b[1]+=(date2[2]-'0')*10;
        cout<<a[1]<<b[1]<<endl;
        if(a[0]==b[0]&&a[1]==b[1])
            cout<<"SAME DAY"<<endl;
        else if(a[0]==b[0]){
            if(a[1]-b[1]>0){
                if(a[1]-b[1]>7)
                    cout<<"OUT OF RANGE";
                else
                    cout<<arr1<<" IS "<<a[1]-b[1]<<" DAY PRIOR";
            }
            else{
                if(b[1]-a[1]>7)
                    cout<<"OUT OF RANGE";
                else
                    cout<<arr1<<" IS "<<b[1]-a[1]<<" DAY AFTER";
            }
        }
        else{
            a[1]
        }
    }
}