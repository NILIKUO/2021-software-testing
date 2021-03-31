
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
 
long long int gcd(long long int a, long long int b) {
	if (b > a)swap(a, b);
	return b ? gcd(b, a % b) : a;
}
int main() {
	int t = 1;
	scanf("%d",&t);
	while (t--) {
		long long int n = 0;
		cin >> n;
		long long int temp = n;
		long long int sum = 0;
		while (1) {
			sum = 0;
			while (temp) {
				sum += (temp % 10);
				temp = temp / 10;
			}
			long long int ans = gcd(n, sum);
			if (ans > 1) {
				printf("%lld\n", n); break;
			}
			else {
				n++; temp = n;
			}
		}
 
	}
	return 0;
}