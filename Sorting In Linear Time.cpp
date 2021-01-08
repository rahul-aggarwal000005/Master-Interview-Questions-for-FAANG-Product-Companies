#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
	int left = 0;
	int right = n - 1;
	int mid = 0;
	while (mid <= right) {
		if (arr[mid] == 0) {
			swap(arr[left], arr[mid]);
			left++;
			mid++ ;
		}
		else if (arr[mid] == 1) {
			mid++;
		}
		else {
			swap(arr[right], arr[mid]);
			right--;
		}
	}

}

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
	solve(arr, n);
	for (int i : arr) {
		cout << i << " ";
	}
	return 0;
}