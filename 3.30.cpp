#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
using namespace std;
vector <int>a;
vector<int>b;
int main() {
	int t = 1;
	scanf("%d",&t);
	while (t--) {
		b.clear();
		a.clear();
		int c[105] = { 0 };
		int n = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &c[i]);
			a.push_back(c[i]);
		}
		sort(a.begin(), a.end());
		//unique(a.begin(), a.end());
		printf("%d ", a[0]);
		for (int i = 1; i < n; i++) {
			if (a[i] == a[i - 1]) {
				b.push_back(a[i-1]);
				continue;
			}
 
			printf("%d ", a[i]);
 
		}
		//printf("%d ", a[n]);
		for (int i = 0; i < b.size(); i++) {
			printf("%d ", b[i]);
		}
	}
	return 0;
}