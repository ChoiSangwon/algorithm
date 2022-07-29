#include <iostream>
#include <algorithm>
using namespace std;
int arr[100001] = { 0 };
int arr2[100001] = { 0 };
int N, H;
int resmax = 200001, resindex = 0;

int main() {
	cin >> N >> H;
	for (int i = 0; i < N/2; i++) 
		cin >> arr[i] >> arr2[i];
		
	sort(arr, arr + (N / 2));
	sort(arr2, arr2 + (N / 2));
	for (int i = 1; i <= H; i++) {
		int val = lower_bound(arr, arr + (N / 2), i ) -arr ;
		val +=upper_bound(arr2,arr2 + (N / 2), H-i) -arr2 ;
		val= N-val;
		if (resmax == val)
			resindex++;
		else if (resmax > val) { 
			resmax = val;
			resindex = 1;
		}
	}
	cout << resmax <<" " << resindex<< endl;

}