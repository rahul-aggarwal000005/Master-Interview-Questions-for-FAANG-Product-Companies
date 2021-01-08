#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n) {
	unordered_map<int, int> mp;
	mp[0] = -1;
	int count = 0;
	int maxLength = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			count--;
		} else {
			count++;
		}
		if (mp.find(count) != mp.end()) {
			maxLength = max(maxLength, i - mp[count]);
		}
		else {
			mp[count] = i;
		}
	}

	return maxLength;
}

int main() {

#ifndef FAANG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans = solve(arr, n);
	cout << ans << endl;
	return 0;
}