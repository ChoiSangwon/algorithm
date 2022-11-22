#include <iostream>
#include <vector>
#include <string>
using namespace std;
int N, M, a, res = 0;
vector<int> v;

void dfs(int b, string str) {
	if(b== N) {
		bool check = true;
		for (int i = 0; i < v.size(); i++) {
			bool temp = false;
			for (int j = 0; j < str.size(); j++) {
				if (str[j] - '0' == v[i]) {
					temp = true;
					break;
				}
			}
			if (!temp) {
				check = false;
				break;
			}
		}
		if (check)
			res++;
		return;
	}
	for (int i = 0; i < 10; i++) {
		char c = i + '0';
		dfs(b+ 1, str + c);
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> a;
		v.push_back(a);
	}
	dfs(0, "");
	cout << res;
	return 0;
}