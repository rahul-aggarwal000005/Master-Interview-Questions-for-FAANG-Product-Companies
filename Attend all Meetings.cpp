#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}

bool canAttend(vector<pair<int, int>> &arr) {
	int n = arr.size();

	sort(arr.begin(), arr.end(), compare);

	int start = arr[0].first;
	int end = arr[0].second;

	for (int i = 1; i < n; i++) {
		if (arr[i].first < end) return false;
		end = max(arr[i].second, end);
	}
	return true;
}

int main() {

#ifndef FAANG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int s, e;
		cin >> s >> e;
		v.push_back({s, e});
	}

	if (canAttend(v)) {
		cout << "true";
	} else {
		cout << "false";
	}
	return 0;
}