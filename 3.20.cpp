#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
using namespace std;
string s;
int main() {
	int t = 1;
	scanf("%d",&t);
	while (t--) {
		cin >> s;
		bool flag = false;
		for(int i=1;i<s.size();i++){
			if (s[i] == '1'&&s[i-1]=='1') {
			    for (int j = i + 1; j < s.size(); j++) {
					if (s[j] == '0' && s[j - 1] == '0')flag = true;
				}
			}
		}
		if (flag)puts("NO");
		else puts("YES");
	}
	return 0;
}