#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
using namespace std;
int a[105], b[105], tm[105];
int stopi[105];
int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		int n = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			scanf("%d%d", &a[i], &b[i]);
		}
		for (int i = 1; i <= n; i++) {
			scanf("%d", &tm[i]);
		}
		int road = 0;
		int arrival = tm[1]+a[1];
		int stop = 0;
		for (int i = 1; i < n; i++) {
			road += (a[i + 1] - b[i] + tm[i+1]);
 
		}
 
		for (int i = 1; i < n; i++) {
			if (arrival + ceil((double(b[i] - a[i])) / 2) < b[i]) { stop += (b[i] - arrival); stopi[i] = b[i] - arrival; }
			else {
				stop += (ceil((double(b[i] - a[i])) / 2)); stopi[i] = ceil(double((b[i] - a[i])) / 2);
			}
			arrival += (stopi[i] + a[i + 1] - b[i] + tm[i+1]);
		}
		printf("%d\n", road + stop+tm[1]+a[1]);
 
	}
	return 0;
}