//codeforces div2 c1
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
	scanf("%d", &t);
	while (t--) {
		int n = 0, k = 3;
		cin >> n >> k;
		if (n % 2 != 0) {
			printf("%d %d %d ", 1, (n - 1) / 2, (n - 1) / 2);
		}
		else {
			if (((n - 2) / 2) % 2 == 0) {
				printf("%d %d %d ", 2, (n - 2) / 2, (n - 2) / 2);
			}
			else {
				printf("%d %d %d ", n / 2, n / 4, n / 4);
			}
		}
	}
	return 0;
}