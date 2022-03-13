#include<iostream>
using namespace std;
class XY_{
public:
    int X;
    int Y;
};
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int N;
    cin>>N;
    XY_ arr[N],temp;
    for(int i=0;i<N;i++)
        cin>>arr[i].X>>arr[i].Y;
    qsort(arr,arr+N*2);
    for(int i=0;i<N-1;i++){
        for(int j=i;j<N;j++){
            if(arr[i].Y>arr[j].Y){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<N-1;i++){
        for(int j=i;j<N;j++){
            if((arr[i].Y==arr[j].Y)&&(arr[i].X>arr[j].X)){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<N;i++)
        cout<<arr[i].X<<" "<<arr[i].Y<<'\n';
}