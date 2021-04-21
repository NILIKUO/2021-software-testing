
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		int n = 0, k = 0;
		cin >> n >> k;
		long long ans = 1;
		for (int i = 1; i <= k; i++) { ans *= n; ans%=1000000007ll; }
		printf("%lld\n", ans % 1000000007ll);
	}
	return 0;
}