#include <bits/stdc++.h>
using namespace std;


int maxSum(int arr[], int n) {
	int mSum = INT_MIN;
	int cur = 0;
	for (int i = 0; i < n; i++) {
		cur += arr[i];
		mSum = max(cur, mSum);
		if (cur < 0) cur = 0;
	}
	return mSum;
}

int main() {

#ifndef FAANG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int ans = maxSum(arr, n);
		cout << ans << endl;
	}

	return 0;
}