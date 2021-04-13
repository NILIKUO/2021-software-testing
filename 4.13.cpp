#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
bool flag[105];
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		memset(flag, false, sizeof(flag));
		int n = 0, k = 0;
		cin >> n >> k;
		if (n == k)puts("-1");
		else if (k == 0) {
			for (int i = 1; i <= n; i++) {
				printf("%d ", i);
			}
			puts("");
		}
		else if (n < 3 && k != 0)puts("-1");
		else if (n / k < 2 && k != 0)puts("-1");
		else if (n==2*k && k != 0)puts("-1");
		else {
			for (int i = 1; i <= k; i++) {
				printf("%d %d ", i, n - i+1);
				flag[i] = true; flag[n - i+1] = true;
			}
			for (int i = 1; i <= n; i++) {
				if (!flag[i])printf("%d ", i);
			}
			puts("");
		}
	}
	return 0;
}