#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
	int n = s.length();
	int maxLen = 1;
	int start = 0;
	int left = 0;
	int right = 0;
	for (int i = 0; i < n; i++) {
		// even length palindrome
		left = i - 1;
		right = i;
		while (left >= 0 and right < n and s[left] == s[right]) {
			if (maxLen < (right - left + 1)) {
				start = left;
				maxLen = right - left + 1;
			}
			--left;
			++right;
		}

		// odd length palindromes

		left = i - 1;
		right = i + 1;
		while (left >= 0 and right < n and s[left] == s[right]) {
			if (maxLen < (right - left + 1)) {
				start = left;
				maxLen = right - left + 1;
			}
			--left;
			++right;
		}
	}
	return s.substr(start, maxLen);
}


int main() {

#ifndef FAANG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	string ans = solve(s);
	cout << ans << endl;
	return 0;
}