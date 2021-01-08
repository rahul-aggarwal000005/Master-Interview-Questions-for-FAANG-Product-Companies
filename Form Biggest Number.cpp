#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
	string x = to_string(a);
	string y = to_string(b);
	return (x + y) > (y + x);
}

void formBiggest(vector<int> &arr) {
	sort(arr.begin(), arr.end(), compare);
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
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		formBiggest(arr);
		for (int i = 0; i < n; i++) {
			cout << arr[i];
		}
		cout << endl;
	}
	return 0;
}