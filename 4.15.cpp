#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
int r[55];
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		int n = 0;
		cin >> n;
		int cnt1 = 0, cnt2 = 0, cnt3 = 0;
		int up = 0;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &r[i]);
			if (r[i] == 1) { cnt1++; up++; }
			else if (r[i] == 2)cnt2++;
			else {
				cnt3++;
				if (cnt1 >= cnt2)up++;
			}
		}
		printf("%d\n", cnt1+cnt3);
	}
	return 0;
}