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
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		int n = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
		}
		int constant;
		int pos = 0;
		if (a[2] == a[1]) {
			constant = a[1];
			for (int i = 1; i <= n; i++) {
				if (a[i] != constant) { pos = i; break; }
			}
		}
		else if (a[1] == a[3]) {
			constant = a[1];
			for (int i = 1; i <= n; i++) {
				if (a[i] != constant) { pos = i; break; }
			}
		}
		else if (a[1] != a[3] && a[2] == a[3]) {
			constant = a[2];
			for (int i = 1; i <= n; i++) {
				if (a[i] != constant) { pos = i; break; }
			}
 
		}
		printf("%d\n", pos);
	}
	return 0;
}