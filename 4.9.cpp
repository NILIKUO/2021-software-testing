#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<math.h>
#include<array>
#include<memory.h>
using namespace std;
int p[100005];
vector<int> pi;
int findmaxpos(int* arr, int start, int end) {
	int maxPos = start;
	for (int i = start; i <= end; i++) {
		if (arr[i] > arr[maxPos])maxPos = i;
	}
	return maxPos;
}
int main() {
	int t = 1;
	scanf("%d", &t);
	while (t--) {
		//memset(p, 0, sizeof(p));
		pi.clear();
		int n = 0;
		cin >> n;
		int maxpos = 1;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &p[i]);
		}
		bool flag = true;
		int i = n;
		int stop = n;
		while (flag) {
			maxpos = findmaxpos(p, 1, i);
			for (int j = maxpos; j <= stop; j++) {
				pi.push_back(p[j]);
			}

			stop = maxpos - 1;
			i = maxpos - 1;
			if (i == 0)flag = false;
		}
		for (int i = 0; i < pi.size(); i++)printf("%d ", pi[i]);
		puts("");
	}
	return 0;
}