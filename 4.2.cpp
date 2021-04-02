#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
int main() {
	int t = 1;
	//scanf("%d", &t);
	while (t--) {
		string s;
		cin >> s;
		bool flag = false;
		if (s.length() == 1 || s.length() == 2)puts("YES");
		else {
			for (int i = 2; i < s.length(); i++) {
				if ((s[i] - 65) != (s[i - 1] + s[i - 2] - 130) % 26) {
					puts("NO"); flag = true; break;
				}
			}
			if (!flag)puts("YES");
		}
	}
	return 0;
}