#include <bits/stdc++.h>
using namespace std;

int getLength(vector<string>&arr, int n, int i, string s) {
	if (i == n) {
		// check if the string generated so far has distinct char
		if (s.length() > 26) return 0;
		char freq[26] = {0};
		for (int k = 0; k < s.length(); k++) {
			if (freq[s[k] - 'a'] == 0) {
				freq[s[k] - 'a'] = 1;
			}
			else {
				return 0;
			}
		}
		return s.length();
	}

	// i will include the current string if the length of the final string is len 26
	int x = INT_MIN, y = INT_MIN;
	if (s.length() + arr[i].length() <= 26) {
		x = getLength(arr, n, i + 1, s + arr[i]);
	}
	y = getLength(arr, n, i + 1, s);
	return max(x, y);
}

int solve(vector<string>&arr, int n) {
	int ans = getLength(arr, n, 0, "");
	return ans;
}

int main() {

#ifndef FAANG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<string> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans = solve(arr, n);
	cout << ans << endl;
	return 0;
}