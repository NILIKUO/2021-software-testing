#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
using namespace std;
 
int main() {
	int t = 1;
	scanf("%d",&t);
	while (t--) {
		int n = 0, k1 = 0, k2 = 0;
		int w = 0, b = 0;
		cin >> n >> k1 >> k2;
		cin >> w >> b;
		if (k1 > k2) {
			if (k2 + (k1 - k2) / 2 >= w && (n - k1 + (k1 - k2) / 2 >= b))puts("YES");
			else puts("NO");
		}
		else if (k2 > k1) {
			if (k1 + (k2 - k1) / 2 >= w && (n - k2 + (k2 - k1) / 2 >= b))puts("YES");
			else puts("NO");
		}
		else {
			if (k1 >= w && (n-k2) >= b)puts("YES");
			else puts("NO");
		}
	}
	return 0;
}