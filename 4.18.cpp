#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
int a[2005];
vector<int> odd;//ji
vector<int> even;//ou
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		odd.clear();
		even.clear();
		int n = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			if (a[i] % 2 == 0)even.push_back(i);
			else odd.push_back(i);
		}
 
			for (int j = 0; j < even.size(); j++) {
				printf("%d ", a[even[j]]);
			}
			for (int j = 0; j < odd.size(); j++) {
				printf("%d ", a[odd[j]]);
			}
			puts("");
	}
	return 0;
}