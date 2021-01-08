#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int target) {
	int s = 0;
	int e = n - 1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (arr[mid] == target) return mid;
		if (arr[mid] >= arr[s]) {
			if (target >= arr[s] and target <= arr[mid]) {
				e = mid - 1;
			}
			else {
				s = mid + 1;
			}
		}
		else {
			if (target >= arr[mid] and target <= arr[e]) {
				s = mid + 1;
			}
			else {
				e = mid - 1;
			}
		}
	}
	return -1;
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
	int target;
	cin >> target;
	int ans = solve(arr, n, target);
	cout << ans << endl;
	return 0;
}