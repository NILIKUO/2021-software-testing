#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
char a[405][405];
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		int n = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
 
		int pos1x=1, pos1y=1, pos2x=1, pos2y=1;
		bool flag = false;
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < n; j++) {
				if (!flag) {
					if (a[i][j] == '*') {
						pos1x = i; pos1y = j;
						flag = true; continue;
					}
				}
				else if (a[i][j] == '*') {
					pos2x = i; pos2y = j;
				}
 
			}
		}
		//for (int i = pos1x+1; i <= n; i++) {
		//	for (int j = pos1y+1; j <= n; j++) {
		//		if (a[i][j] == '*') {
		//			pos2x = i; pos2y = j;
		//		}
		//	}
		//}
		if (pos1x != pos2x && pos1y != pos2y) {
			a[pos1x][pos2y] = '*';
			a[pos2x][pos1y] = '*';
			for (int i = 1; i <= n; i++) {
				for (int j = 0; j < n; j++) {
					printf("%c", a[i][j]);
				}
				puts("");
			}
		}
		else {
			if (pos1x == 1 && pos2x == 1) {
				a[pos1x+1][pos1y] = '*';
				a[pos2x+1][pos2y] = '*';
				for (int i = 1; i <= n; i++) {
					for (int j = 0; j < n; j++) {
						printf("%c", a[i][j]);
					}
					puts("");
				}
			}
			else if (pos1y == 0 && pos2y == 0) {
				a[pos1x][pos1y + 1] = '*';
				a[pos2x][pos2y + 1] = '*';
				for (int i = 1; i <= n; i++) {
					for (int j = 0; j < n; j++) {
						printf("%c", a[i][j]);
					}
					puts("");
				}
			}
			else if (pos1x == n && pos2x == n) {
				a[pos1x - 1][pos1y] = '*';
				a[pos2x - 1][pos2y] = '*';
				for (int i = 1; i <= n; i++) {
					for (int j = 0; j < n; j++) {
						printf("%c", a[i][j]);
					}
					puts("");
				}
			}
 
			else if((pos1y==n-1)&&(pos2y==n-1)){
				a[pos1x][pos1y-1] = '*';
				a[pos2x][pos2y-1] = '*';
				for (int i = 1; i <= n; i++) {
					for (int j = 0; j < n; j++) {
						printf("%c", a[i][j]);
					}
					puts("");
				}
			}
			else {
				if (pos1x == pos2x) {
					a[pos1x - 1][pos1y] = '*';
					a[pos2x - 1][pos2y] = '*';
					for (int i = 1; i <= n; i++) {
						for (int j = 0; j < n; j++) {
							printf("%c", a[i][j]);
						}
						puts("");
					}
 
 
				}
				else {
					a[pos1x][pos1y - 1] = '*';
					a[pos2x][pos2y - 1] = '*';
					for (int i = 1; i <= n; i++) {
						for (int j = 0; j < n; j++) {
							printf("%c", a[i][j]);
						}
						puts("");
					}
 
				}
			}
		}
	}
	return 0;
}