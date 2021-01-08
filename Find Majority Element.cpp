#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef FAANG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int e1 = -1;
	int e2 = -1;
	int c1 = 0 ;
	int c2 = 0;
	for (int i = 0; i < n; i++) {
		if (c1 == 0) {
			e1 = arr[i];
			c1 = 1;
		}
		else if (arr[i] == e1) {
			c1++;
		}
		else if (c2 == 0) {
			e2 = arr[i];
			c2 = 1;
		}
		else if (arr[i] == e2) {
			c2++;
		}
		else {
			c1--;
			c2--;
		}
	}
	c1 = 0;
	c2 = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == e1) {
			c1++;
		}
		else if (arr[i] == e2) {
			c2++;
		}
	}

	if (c1 > (n / 3) and c2 > (n / 3)) {
		cout << e1 << " " << e2 << endl;
	}
	else if (c1 > (n / 3)) {
		cout << e1 << endl;
	}
	else if (c2 > (n / 3)) {
		cout << e2 << endl;
	}
	else {
		cout << "No Majority Elements";
	}
	return 0;
}