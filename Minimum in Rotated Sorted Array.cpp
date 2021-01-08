#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n) {
	int s = 0;
	int e = n - 1;
	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;

		if (arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1]) {
			ans = mid;
			break;
		}

		if (arr[mid] < arr[s]) {
			e = mid - 1;
		}
		else if (arr[mid] > arr[e]) {
			s = mid + 1;
		}
	}
	if (ans == n - 1) return arr[0];
	return arr[ans + 1];

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