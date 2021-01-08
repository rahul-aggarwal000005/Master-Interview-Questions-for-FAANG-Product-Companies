#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr) {
	int n = arr.size();
	int count = 0;
	unordered_map<int, int> mp;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		if (sum == 0) {
			count++;
		}
		if (mp.find(sum) != mp.end()) {
			count += mp[sum];
		}

		mp[sum]++;
	}

	return count;


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
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int ans = solve(arr);
		cout << ans << endl;
	}
	return 0;
}