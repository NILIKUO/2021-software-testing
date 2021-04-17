#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
int a[300005];
int t[300005];
int posFirst[300005];
int query[300005];
int main() {
	int n = 0, q = 0;
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		if (posFirst[a[i]] == 0) {
			posFirst[a[i]] = i;
		}
	}
	for (int i = 1; i <= q; i++) {
		scanf("%d", &t[i]);
	}
	for (int i = 1; i <= q; i++) {
		query[i] = posFirst[t[i]];
		posFirst[t[i]] = 1;
		for (int j = 1; j <= 50; j++) {
			if (posFirst[j] != 0 && posFirst[j] < query[i]&&j!=t[i])posFirst[j]++;
		}
	}
	for (int i = 1; i <= q; i++) {
		printf("%d ", query[i]);
	}
	puts("");
	return 0;
}