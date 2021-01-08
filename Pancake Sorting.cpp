#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {

	int i = 0;
	int j = n - 1;
	vector<int> res;
	while (j >= 0) {
		int mi = 0;
		for (i = 0; i <= j; i++) {
			if (arr[i] > arr[mi]) {
				mi = i;
			}
		}
		if (mi != 0) res.push_back(mi + 1);
		if (j != 0) res.push_back(j + 1);
		reverse(arr, arr + mi + 1);
		reverse(arr, arr + j + 1);
		j--;
	}

	for (auto x : res) {
		cout << x << " ";
	}
	cout << endl;

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
		solve(arr, n);
	}
	return 0;
}