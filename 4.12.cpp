#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
int b[200005];
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		int n = 0;
		cin >> n;
		for (int i = 1; i <= n+2; i++) {
			scanf("%d", &b[i]);
		}
		sort(b + 1, b + n + 3);
		long long int sumN = 0;
		for (int i = 1; i <= n + 1; i++) {
			sumN += b[i];
		}
		int sum = b[n+2];
 
		bool  flag = false;
		for (int i = 1; i <= n + 1; i++) {
			if (sumN - b[i] == sum) {
				for (int j = 1; j <= n + 1; j++) {
					if (j == i);
					else {
						printf("%d ", b[j]);
					}
				}
				puts("");
 
				flag = true;
 
				break;
			}
		}
		if (!flag) {
			if (b[n + 1] == (sumN-b[n+1])) {
				for (int i = 1; i <= n; i++) {
					printf("%d ", b[i]);
				}
				puts("");
			}
			else
				puts("-1");
		}
	}
	return 0;
}