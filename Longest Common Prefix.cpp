#include <bits/stdc++.h>
using namespace std;

string solve(vector<string> &arr, int n) {
	if (n == 0) return "";
	string first = arr[0];
	string res = "";
	for (int i = 0; i < first.length(); i++) {
		char ch = first[i];
		for (int j = 1; j < n; j++) {
			if (i < arr[j].length() and arr[j][i] != ch) {
				return res;
			}
		}
		res.push_back(ch);
	}
	return res;
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
	string ans = solve(arr, n);
	cout << ans << endl;
	return 0;
}