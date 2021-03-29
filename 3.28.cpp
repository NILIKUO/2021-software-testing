#include<iostream>
#include<algorithm>
using namespace std;
 
int a[1000005];
 
int main() {//u竖着推v横着推
	int t = 1;
	cin >> t;
	while (t--) {
		int n, u, v;
		int coin;
		bool noCoin = false;
		bool Coin1 = false;
		cin >> n >> u >> v;
		scanf("%d", &a[1]);
		for (int i = 2; i <= n; i++) {
			scanf("%d", &a[i]);
			if (abs(a[i] - a[i - 1]) >= 2) {
				coin = 0;
				noCoin = true;
			}
		}
		if (!noCoin) {
			for (int i = 2; i <= n; i++) {
				if (abs(a[i] - a[i - 1]) == 1) {
					coin = u > v ? v : u;
					Coin1 = true;
					break;
				}
			}
		}
		if ((!Coin1) && (!noCoin)) {
			if (v<u) coin = 2*v;
			else coin = u + v;
		}
		printf("%d\n", coin);
	}
	return 0;
}