#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
int a[100005];
int main() {
	int t = 1;
	scanf("%d",&t);
	while (t--) {
		int n = 0;
		int maxT = 0;
		memset(a, 0, sizeof(a));
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			maxT = max(maxT, a[i]);
		}
		int c = 0, m = 0;
		int ans = m;
		bool flagI = false;
		bool flagD = false;
		if (a[2] >= a[1]) {
			c = a[2] - a[1];
			for (int i = 3; i <= n; i++) {
				if ((a[i] >= a[i - 1]) && a[i] - a[i - 1] == c)continue;
				else if (a[i] >= a[i - 1] && a[i] - a[i - 1] != c) {
					ans = -1; flagI = true; break;
				}
				else {//di jian
					flagI = true;
					int M = a[i - 1] - a[i];
 
					ans = M + c;
					if (maxT >= ans) { ans = -1;  break; }
					for (int j = i; j < n; j++) {
						if (a[j] <= a[j + 1] && a[j + 1] - a[j] == c)continue;
						else if (a[j] <= a[j + 1] && a[j + 1] - a[j] != c) { ans = -1;  break; }
						else {//di jian
							if (M == a[j] - a[j + 1])continue;
							else { ans = -1;  break; }
						}
					}
					break;
				}
				if (!flagI)ans = 0;
			}
		}
		else {//di jian at first
			int N = a[1] - a[2];
			for (int i = 3; i <= n; i++) {
				if (a[i] < a[i - 1] && a[i-1] - a[i] == N)continue;
				else if (a[i] < a[i - 1] && a[i-1] - a[i] != N) { flagD = true; ans = -1; break; }
				else {//di zeng
					flagD = true;
					c = a[i] - a[i - 1];
					ans = N + c;
					if (maxT >= ans) { ans = -1; break; }
					for (int j = i; j < n; j++) {
						if (a[j] > a[j + 1] && a[j] - a[j + 1] == N)continue;
						else if (a[j] > a[j + 1] && a[j] - a[j + 1] != N) { ans = -1; break; }
						else {//di zeng
							if (a[j + 1] - a[j] == c)continue;
							else { ans = -1; break; }
						}
					}
					break;
				}
			}
			if (!flagD)ans = 0;
		}
		if (ans == 0 || ans == -1)
			printf("%d\n", ans);
		else printf("%d %d\n", ans, c);
	}
	return 0;
}