#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
int a[200005];
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		memset(a, 0, sizeof(a));
		int n = 0;
		cin >> n;
		//bool flag = false;
		//long long sum = 0;
		//int cnt0 = 0;
		//int cnt = 0;//shu you duo shao ge 2 de bu tong mi
		int sum = 0;
		int cnt = 0;
		long long int ans = 0;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			//	if (i == 1);
			//	else {
			//		if (a[i] != a[i - 1])flag = true;
			//	}
			//	if (a[i] == 0)cnt0++;
			//	if (!(a[i] & (a[i] - 1))) {//shi 2 de mi
			//		f[(int)log2(a[i])] = 1; cnt++; v.push_back(i);
			if (i == 1)sum = a[1];
			else sum &= a[i];
		}
		for (int i = 1; i <= n; i++) {
			if (a[i] == sum)cnt++;
		}
		//}
		//if (!flag) {//quan yi yang
		//	sum = 0;
		//	for (int i = 1; i <= n; i++) {
		//		sum *= i;
		//	}
		//	long long int ans = sum / 1000000007ll;
		//	printf("%d\n", ans);
		//}
		//else if (cnt0 >= 2) {//duo yu liang ge 0, liang ge 0 yi ding zai liang duan, yi ding you jie
		//	//sum = 0;
		//	sum = cnt0 * (cnt0 - 1) / 2;
		//	for (int i = 1; i <= n - 2; i++) {
		//		sum *= i;
		//	}
		//	long long int ans = sum / 1000000007ll;
		//	printf("%d\n", ans);
		//}
		//else if (cnt >= 2) {//you 2 ge yi shang 2 de bu tong mi
		//	for (int i = 0; i < v.size(); i++) {
		//		for (int j = 1; j <= n; j++) {
		//			if (a[v[i]] & a[j]) { puts("0"); break; }//you mou yi wei yu qi zhong yi ge 2 de mi & hou you zhi le
		//		}
		//	}
		//}
		if (cnt < 2)puts("0");
		else {
			ans = (long long)cnt * (cnt - 1);
			for (int i = 1; i <= n - 2; i++) {
				ans *= i;
				ans %= 1000000007ll;
			}
			printf("%lld\n", ans % 1000000007ll);
		}
	}
	return 0;
}