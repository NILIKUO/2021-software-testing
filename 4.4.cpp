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
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		s.clear();
		cin >> s;
		bool flag = false;
		bool isa = true;
 
		for (int i = 0; i < s.length()/2; i++) {
			if (s[i] != 'a' || s[s.length() - 1 - i] != 'a')isa = false;
			if (s.length() % 2 != 0) {
				if (s[s.length() / 2] != 'a')isa = false;
			}
			if (s[i] != s[s.length() - i - 1]) {
				flag = true; break;
			}
		}
		if (s.length() == 1 && s[0] != 'a') {
			puts("YES"); cout << 'a' << s[0] << endl;
		}
		else {
			if (flag) {
				puts("YES");
				for (int i = 0; i < s.length() / 2; i++)printf("%c", s[i]);
				printf("%c", 'a');
				for (int i = s.length() / 2; i < s.length(); i++)printf("%c", s[i]);
				puts("");
			}
			if (!flag && isa) {
				puts("NO");
			}
			if (!flag && (!isa)) {
				puts("YES");
				printf("%c", 'a');
				for (int i = 0; i < s.length(); i++) {
					printf("%c", s[i]);
				}
				puts("");
			}
		}
	}
	return 0;
}