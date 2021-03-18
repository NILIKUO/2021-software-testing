#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
long long int c[100005];

int main() {
	int t = 1;
	scanf("%d",&t);
	while (t--) {
		memset(c, 0, sizeof(c));
		int n = 0;
		cin >> n;
		long long int total = 0;
		for (int i = 1; i <= n; i++) {
			scanf("%lld", &c[i]);
		}
		long long int minH = 0, minV = 0;
		long long int minT = c[2] * n + c[1] * n;
		minH = c[1];//odd
		minV = c[2];//even
		total = c[1] + c[2];
		for (int j = 3; j <= n; j++) {
			//minH = c[j]; minV = c[j - 1];
			//total = 0;
			total += c[j];
			//for (int k = j; k >= 1; k -= 2) {
			//	minH = min(c[k],minH);
			//}
			//for (int k = j - 1; k >= 1; k -= 2) {
			//	minV = min(c[k],minV);
			//}
			if (j % 2 != 0) {
				minH = min(minH, c[j]);
				minV = min(minV, c[j - 1]);
			}
			else {
				minH = min(minH, c[j-1]);
				minV = min(minV, c[j]);

			}
			minT = min((minH * (n - ((j + 1) / 2) + 1) + minV * (n - (j / 2) + 1) + total - minH - minV), minT);
		}
		printf("%lld\n", minT);
	}
	return 0;
}