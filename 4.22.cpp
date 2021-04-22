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
		int n = 0, k = 0;
		cin >> n >> k;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
		}
		int flag = 1;
		for (int i = 1; i <= k; i++) {
			if (flag == n)break;
			while (a[flag] == 0) {
				if (flag < n)
					flag++;
				else break;
			}
			a[flag]--;
			a[n]++;
		}
		for (int i = 1; i <= n; i++) {
			printf("%d ", a[i]);
		}
		puts("");
	}
	return 0;
}
