#include <iostream>
#include <cstring>
using namespace std;
int arr[11];
int arr2[11];

int main()
{
    int N;
    memset(arr, -1, sizeof(int) * 11);
    memset(arr2, 0, sizeof(int) * 11);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        if (arr[a] == -1){
            arr[a] = b;
        }else if (arr[a] != b){
            arr[a]=b;
            arr2[a]++;
        }
    }
    int res=0;
    for(int i=1;i<=10;i++){
        res+=arr2[i];
    }
    cout<<res<<endl;
}