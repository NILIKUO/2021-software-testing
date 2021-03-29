#include<iostream>
#include<algorithm>
using namespace std;
//bool cmp(int a, int b) {
//	return a > b;
//}
int a[100005];
 
int main() {
	int n, q,x,k;
	int queryEach;
	bool flag = true;
	bool start = true;
	cin >> n >> q;
	int count1 = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d",&a[i]);
		if (a[i] == 1)count1++;
	}
	for (int i = 1; i <= q; i++) {
		scanf("%d", &queryEach);
		if (queryEach == 1) {
			scanf("%d", &x);
			a[x] = 1 - a[x];
			if (a[x] == 1)count1++;
			else count1--;
			flag = true;
		}
		else if (queryEach == 2) {
			//if (!start) {
			//	if (flag && a[x] == 1) {
			//		sort(a + 1, a + x, greater<int>());
			//	}
			//	else if (flag && a[x] == 0) {
			//		sort(a + x, a + n, greater<int>());
			//	}
			//}
			//else if(start)sort(a + 1, a + n, greater<int>());
			//scanf("%d", &k);
			//printf("%d\n", a[k]);
			//flag = false;
			//start = false;
			scanf("%d", &k);
			if (count1 >= k) printf("%d\n", 1);
			else printf("%d\n", 0);
		}
	}
 
	return 0;
}
