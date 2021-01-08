#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n) {
	vector<int> res;
	if (n == 1) {
		res.push_back(0);
		return res;
	}
// 5 ==> -2 -1 0 1 2
	int x = n / 2;
	x = -x;
	while (x < 0) {
		res.push_back(x);
		x++;
	}

	if (n & 1) res.push_back(0);

	x = 1;
	while (x <= n / 2) {
		res.push_back(x);
		x++;
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

	vector<int> arr = solve(n);
	for (auto x : arr) {
		cout << x << " ";
	}
	return 0;
}