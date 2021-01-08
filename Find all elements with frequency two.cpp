#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
	vector<int> res;
	for (int i = 0; i < n; i++) {
		int cur = abs(arr[i]) - 1;
		if (arr[cur] < 0) {
			res.push_back(cur + 1);
		}
		else {
			arr[cur] *= -1;
		}
	}

	sort(res.begin(), res.end());
	cout << "[";
	for (int i = 0; i < res.size(); i++) {
		if (i != res.size() - 1) {
			cout << res[i] << ", ";
		}
		else {
			cout << res[i];
		}
	}
	cout << "]";
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
	solve(arr, n);

	return 0;
}