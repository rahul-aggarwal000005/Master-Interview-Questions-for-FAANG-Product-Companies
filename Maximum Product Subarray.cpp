#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(int arr[], int n) {
	ll minVal = arr[0];
	ll maxVal = arr[0];
	ll ans = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i] < 0) {
			swap(maxVal, minVal);
		}

		maxVal = max((ll)(arr[i]), maxVal * arr[i]);
		minVal = min((ll)(arr[i]), minVal * arr[i]);
		ans = max(maxVal, ans);
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
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	ll ans = solve(arr, n);
	cout << ans << endl;

	return 0;
}