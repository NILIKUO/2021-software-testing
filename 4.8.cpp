#include<iostream>
#include<stdio.h>
using namespace std;
int a[100];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int sum[100] = { 0 };
	sum[1] = 0;
	for (int m = 2; m <= n; m++) {
		for (int k = 1; k < m; k++) {
			if (a[m] > a[k])sum[m]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << sum[i] << " ";
	}
	return 0;
}