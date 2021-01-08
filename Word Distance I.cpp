#include <bits/stdc++.h>
using namespace std;

int findDistance(vector<string> &arr, string x, string y) {
	/*
		- we will find the first occurenece of x or y
		- prev = the first word either x or y
		-
	*/
	int dist = INT_MAX;
	int w1 = -1;
	int w2 = -1;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == x) {
			w1 = i;
		}
		if (arr[i] == y) {
			w2 = i;
		}
		if (w1 != -1 and w2 != -1) {
			dist = min(dist, abs(w1 - w2));
		}
	}
	return dist;

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
	string x, y;
	cin >> x >> y;

	int dist = findDistance(arr, x, y);
	cout << dist << endl;
	return 0;
}