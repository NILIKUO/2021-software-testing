//Educational Codeforces Round 105 (Rated for Div. 2), //problem: (A) ABC String
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
using namespace std;
 
string a;
string b;
 
stack<char> s;
bool match(string b) {
	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '(') {
			s.push('(');
		}
		else if (b[i] == ')') {
			if (s.empty()) {
				return false;
			}
			else {
				char ch = s.top();
				s.pop();
				if (ch != '(') {
					return false;
				}
			}
		}
	}
	if (!s.empty()) {
		return false;
	}
	return true;
}
int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		int countLeft = 0, countRight = 0;
		a.clear();
		while (!s.empty())s.pop();
		cin >> a;
		b = a;
		if (a[0] == a[a.length() - 1])puts("NO");
		else {
			b[0] = '(', b[b.length() - 1] = ')';
			for (int i = 0; i < b.length(); i++) {
				if (a[i] == a[0]) {
					b[i] = '(';
					countLeft++;
				}
				else if (a[i] == a[a.length() - 1]) {
					b[i] = ')';
					countRight++;
				}
				else {
					b[i] = 'x';
				}
			}
			auto position = b.find('x');
			if (countRight == countLeft && position != b.npos)puts("NO");
			else if (countRight == countLeft) {
				if (match(b) == false)puts("NO");
				else puts("YES");
			}
			else if (countRight > countLeft) {
				for (int i = 1; i < b.length() - 1; i++) {
					if (b[i] == 'x')b[i] = '(';
				}
				if (match(b) == false)puts("NO");
				else puts("YES");
			}
			else if (countRight < countLeft) {
				for (int i = 1; i < b.length() - 1; i++) {
					if (b[i] == 'x')b[i] = ')';
				}
				if (match(b) == false)puts("NO");
				else puts("YES");
			}
			else puts("YES");
		}
	}
	return 0;
}