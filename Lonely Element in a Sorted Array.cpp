#include <bits/stdc++.h>
using namespace std;

bool singleElement(vector<int>&arr, int m) {
	if (m == 0 and arr[0] != arr[1]) return true;
	if (m == arr.size() - 1 and arr[m] != arr[m - 1]) return true;
	if (arr[m] != arr[m + 1] and arr[m] != arr[m - 1]) return true;
	return false;
}

int lonely(vector<int> &arr) {
	int n = arr.size();
	int s = 0;
	int e = n - 1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (singleElement(arr, mid)) return arr[mid];

		if (mid + 1 < n and arr[mid] == arr[mid + 1]) {
			if (mid % 2 == 0) {
				s = mid + 1;
			}
			else {
				e = mid - 1;
			}
		}
		else if (arr[mid] == arr[mid - 1]) {
			if (mid % 2 == 1) {
				s = mid + 1;
			}
			else {
				e = mid - 1;
			}

		}
		else {
			return arr[mid];
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
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ans = lonely(arr);
	cout << ans << endl;
	return 0;
}