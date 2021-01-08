#include <bits/stdc++.h>
using namespace std;

int first(int arr[], int n, int target) {
	int s = 0;
	int e = n - 1;
	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (arr[mid] == target) {
			ans = mid;
			e = mid - 1;
		}
		else if (arr[mid] > target) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
	return ans;
}

int last(int arr[], int n, int target) {
	int s = 0;
	int e = n - 1;
	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (arr[mid] == target) {
			ans = mid;
			s = mid + 1;
		}
		else if (arr[mid] > target) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
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
	int target;
	cin >> target;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int x = first(arr, n, target);
	if (x == -1) {
		cout << "-1 -1";
		return 0;
	}
	int y = last(arr, n, target);
	cout << x << " " << y << endl;
	return 0;
}