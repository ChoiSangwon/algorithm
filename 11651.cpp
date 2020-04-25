#include<iostream>
using namespace std;
class XY{
    public:
    int X;
    int Y;
};
int main(){
    int N;
    cin>>N;
    XY arr[5],temp;
    for(int i=0;i<N;i++)
        cin>>arr[i].X>>arr[i].Y;
    for(int i=0;i<N-1;i++){
        for(int j=i;j<N;j++){
            if(arr[i].Y>arr[j].Y){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else if(arr[i].Y==arr[j].Y){
                if(arr[i].X>arr[j].X){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    for(int i=0;i<N;i++)
        cout<<arr[i].X<<" "<<arr[i].Y<<endl;;
}