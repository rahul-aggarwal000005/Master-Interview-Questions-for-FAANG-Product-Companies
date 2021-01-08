#include <bits/stdc++.h>
using namespace std;

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

	unordered_set<int> s;
	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}
	int ans = n / 2;
	if (s.size() < n / 2) {
		ans = s.size();
	}
	cout << ans << endl;

	return 0;
}