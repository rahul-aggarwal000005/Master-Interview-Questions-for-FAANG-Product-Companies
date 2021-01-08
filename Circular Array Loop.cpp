#include <bits/stdc++.h>
using namespace std;

int nextIndex(int arr[], int i, int n) {
	return (arr[i] + i + n) % n;
}

bool CicularArray(int a[], int n) {

	/*
		We can use the concept of slow and fast pointer
		- we need to find the next index from i index nextIndex(arr,i,n)
		- move for each index to check if the cycle exist from that index
		- we should only go in one direction
			- check for one direction :
				- a[slow] * a[next(a,slow,n)] >0
				- a[fast] * a[next(a,fast,n)] > 0 and a[fast] * a[next(a,next(a,fast,n),n)] > 0
		- check if the length of the cycle is not one : if nextIndex of slow is same as slow
	*/

	for (int i = 0; i < n; i++) {

		if (a[i] == 0) continue;
		int slow = i;
		int fast = i;
		while (a[slow]*a[nextIndex(a, slow, n)] > 0 and a[fast]*a[nextIndex(a, fast, n)] > 0
		        and a[fast] * a[nextIndex(a, nextIndex(a, fast, n), n)] > 0) {

			slow = nextIndex(a, slow, n);
			fast = nextIndex(a, nextIndex(a, fast, n), n);
			if (slow == fast) {
				if (nextIndex(a, slow, n) == slow) break;
				return true;
			}
		}

		slow = i;
		int val = a[slow];
		while (a[slow] * val > 0) {
			int x = slow;
			slow = nextIndex(a, slow, n);
			a[x] = 0;
		}

	}
	return false;
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

	cout << CicularArray(arr, n);

	return 0;
}