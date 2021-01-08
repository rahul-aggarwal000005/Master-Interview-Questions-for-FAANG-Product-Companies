#include <bits/stdc++.h>
using namespace std;


void moveZeroes(int arr[], int n) {

	/*
		- find the first occurence of zero
		- initialize a pointer pointing to the first zero position
		- move the i pointer from the next position of the first zeroth position
		- if the current element is non zero then swap it with zero'th pointer and increment
		  both i++ and z++ else just increment i++
	*/

	int z = 0;
	while (z < n and arr[z] != 0) {
		z++;
	}
	int i = z + 1;
	while (i < n) {
		if (arr[i] == 0) {
			i++;
		} else {
			swap(arr[i], arr[z]);
			z++;
			i++;
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

	moveZeroes(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}