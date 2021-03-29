#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
using namespace std;
 
vector<char> tempfront;
vector<char> tempback;
int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		int n = 0, k = 0;
		cin >> n >> k;
		string s;
		cin >> s;
		tempback.clear();
		tempfront.clear();
		for (int i = 0; i < k; i++) {
			tempfront.push_back(s[i]);
			tempback.push_back(s[n - i - 1]);
		}
		if (tempfront == tempback) {
			if (n % 2 == 0 && k == n / 2)puts("NO");
			else puts("YES");
		}
		else puts("NO");
	}
	return 0;
}