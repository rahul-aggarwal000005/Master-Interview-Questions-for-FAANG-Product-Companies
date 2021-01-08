#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> const &a, pair<int, int> const &b) {
	return a.first < b.first;
}

int solve(vector<int> &s, vector<int> &e) {

	sort(s.begin(), s.end());
	sort(e.begin(), e.end());
	int n = s.size();
	int i = 0;
	int j = 0;
	int ans = 0;
	int halls = 0;
	while (i < n and j < n) {
		if (s[i] < e[j]) {
			halls++;
			i++;
		}
		else {
			halls--;
			j++;
		}
		ans = max(halls, ans);
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
	vector<int> s(n), e(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i] >> e[i];
	}
	int ans = solve(s, e);
	cout << ans << endl;
	return 0;
}