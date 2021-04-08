#include <stdio.h>
#include <iostream>
using namespace std;
void solve(int x) {
	if (x == 2) {
		printf("2");
		return;
	}
	if (x == 1) {
		printf("2(0)");
		return;
	}
	int flag = 0;
	for (int i = 15; i >= 0; i--)
		if ((1 << i) & x) {
			if (flag) printf("+");
			flag = 1;
			if (i == 0) printf("2(0)");
			else if (i == 1) printf("2");
			else printf("2("), solve(i), printf(")");
		}
}
int main() {
	int n;
	cin >> n;
	solve(n);
}