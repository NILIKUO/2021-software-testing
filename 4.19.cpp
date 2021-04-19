#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
string s;
vector<int>T;
vector<int>M;
int pos[50];
int posM;
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		memset(pos, 0, sizeof(pos));
		int n = 0;
		T.clear();
		M.clear();
		cin >> n;
		cin >> s;
		bool flag = false;
		int cntM = 0;
		int cntTf = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'T')T.push_back(i);
			else M.push_back(i);
		}
		if (T.size() == 2 * M.size()) {
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == 'M') {
					cntM++;
					if (cntM > cntTf || M.size() - cntM+1 > T.size() - cntTf) {
						flag = true; break;
					}
				}
				else cntTf++;
			}
		}
		else flag = true;
		if (!flag)puts("YES");
		else puts("NO");
	}
	return 0;
}