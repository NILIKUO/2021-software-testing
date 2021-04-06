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
		long long int p = 0, a = 0, b = 0, c = 0;
		cin >> p >> a >> b >> c;
		long long int waita = 0, waitb = 0, waitc = 0;
		if (p <= a) {
			waita = a - p;
		}
		else if (p > a && p % a == 0)waita = 0;
		else {//p>a
			waita = a - p % a;
		}
		if (p <= b) {
			waitb = b - p;
		}
		else if (p > b && p % b == 0)waitb = 0;
		else {
			waitb = b - p % b;
		}
		if (p <= c) {
			waitc = c - p;
		}
		else if (p > c && p % c == 0)waitc = 0;
		else {
			waitc = c - p % c;
		}
		long long int ans = min(waita, min(waitb, waitc));
		printf("%lld\n", ans);
	}
	return 0;
}