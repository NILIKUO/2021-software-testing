#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
int a[105];
bool check(int x) {
	for (int i = 1; i <= sqrt(x); i++) {
		if (x == i * i)return true;
	}
	return false;
}
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		int n = 0;
		cin >> n;
		bool flag = false;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			if (!check(a[i]))flag = true;
		}
		if (flag)puts("YES");
		else puts("NO");
	}
	return 0;
}