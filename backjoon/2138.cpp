#include <iostream>
using namespace std;
int N,count1=0,count2=0,ans=0;
string arr,arr2;
string res;
int main(){
    cin>>N;
    cin>>arr>>res;
    arr2=arr;
    arr[0]=0;
    for(int i=1;i<N;i++){
        if (arr[i - 1] != res[i - 1]) {//i-1번째 전구에 영향주는건 i번 스위치뿐 
			for (int j = i - 1; j <= i + 1; j++) {
		        if (j < 0 || j >= N) continue;
		        if (arr[j] == '1') arr[j] = '0';
		        else arr[j] = '1';
	        }
            cout<<arr<<endl;
            count1++;
		}
        
    }
    //cout<<arr<<endl;
    if(arr!=res)
        ans=-1;
    else
        ans=count1;
    for(int i=1;i<N;i++){
        if (arr[i - 1] != res[i - 1]) {//i-1번째 전구에 영향주는건 i번 스위치뿐 
			for (int j = i - 1; j <= i + 1; j++) {
		        if (j < 0 || j >= N) continue;
		        if (arr[j] == '1') arr[j] = '0';
		        else arr[j] = '1';
	        }
			count2++;
            cout<<arr<<endl;
		}
    }
    //cout<<arr2<<endl;
    if(arr2!=res)
        ans=-1;
    else
        ans=min(count2,ans);
    //cout<<ans<<endl;
}