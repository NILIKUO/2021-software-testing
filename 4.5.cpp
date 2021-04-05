#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
char a[300005];
char b[300005];
vector<int>op;//na li ke yi cao zuo
vector<int>dif;//na li a b bu tong
vector<int>needop;//na li xu yao cao zuo ,qian zhe me duo wei
int rec[300005];
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		/*memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));*/
		memset(rec, 0, sizeof(rec));
		op.clear();
		dif.clear();
		needop.clear();
		int n = 0;
		scanf("%d", &n);
		int cnt1 = 0, cnt0 = 0;
		cin >> a;
		cin >> b;
		for (int i = 0; i < n; i++) {
			if (b[i] == '1')cnt1++;
			if (b[i] == '0')cnt0++;
			if (cnt1 == cnt0) { op.push_back(i); rec[i] = 1; }
			if (b[i] != a[i])dif.push_back(i);
		}
		if (dif.size() == 0)puts("YES");
		else {
			if (dif[0] != 0)needop.push_back(dif[0] - 1);
			for (int i = 1; i < dif.size(); i++) {
				if (dif[i] - dif[i - 1] != 1) {
					needop.push_back(dif[i - 1]);
					needop.push_back(dif[i] - 1);
				}
			}
			needop.push_back(dif[dif.size() - 1]);
			bool flag = false;
			//int cnt = 0;//you duo shao ge needop bei man zu
			for (int i = 0; i < needop.size(); i++) {
			//	for (int j = i; j < op.size(); j++) {
			//		if (needop[i] == op[j]) { cnt++; break; }
			//	}
				if (rec[needop[i]] != 1) { flag = true; break; }
			}
 
			if (flag)puts("NO");
			else puts("YES");
		}
	}
	return 0;
}