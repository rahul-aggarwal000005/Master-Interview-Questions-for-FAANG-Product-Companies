#include <bits/stdc++.h>
using namespace std;

int SunnyBuildings(int arr[], int n) {
	/*
		- assign the leftmost element as the maximum height till now in left
		- iterate over the array if the height of the ith builing is greater than
		the maxHeight till now then increment counter and update maximum height
		else continue
	*/

	int cnt = 1;
	int maxHeight = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] >= maxHeight) {
			maxHeight = arr[i];
			cnt++;
		}
	}
	return cnt;
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
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cout << SunnyBuildings(arr, n) << endl;
	}

	return 0;
}