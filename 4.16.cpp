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
		int a = 0, b = 0, c = 0;
		cin >> a >> b >> c;
		int c_10=1;
		for (int i = 1; i < c; i++)c_10 *= 10;
		int gcd = c_10 + 1;
		int x = gcd, y = gcd;
		int a_10 = 1, b_10 = 1;
		for (int i = 1; i < a; i++)a_10 *= 10;
		for (int i = 1; i < b; i++)b_10 *= 10;
		while (x / a_10 < 1) {
			x *= 2;
		}
		while (y / b_10 < 1) {
			y *= 3;
		}
		printf("%d %d\n",x,y);
	}
	return 0;
}