#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr, int n) {
	int s = 0;
	int e = n - 1;
	int ans = 0;
	while (s <= e) {
		ans = max(ans, min(arr[s], arr[e]) * (e - s));
		if (arr[s] < arr[e]) {
			s++;
		}
		else {
			e--;
		}
	}
	return ans;
}

int main() {

#ifndef FAANG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans = solve(arr, n);
	cout << ans << endl;
	return 0;
}