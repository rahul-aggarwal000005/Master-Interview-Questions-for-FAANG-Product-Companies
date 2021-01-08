#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(int arr[], int n) {

	int s = 0;
	int e = n - 1;
	while (s < e) {
		int mid = (s + e) / 2;
		if (arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1]) return true;

		if (arr[mid] < arr[mid + 1]) {
			s = mid + 1;
		}
		else {
			e = mid;
		}
	}

	return false;

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

	if (solve(arr, n)) {
		cout << "true";
	} else {
		cout << "false";
	}
	return 0;
}