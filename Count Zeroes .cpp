#include <bits/stdc++.h>
using namespace std;


int countZeroes(int n) {

	int count = 0;
	for (int div = 5; n / div >= 1; div *= 5) {
		count += (n / div);
	}
	return count;
}

int main() {

#ifndef FAANG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int ans = countZeroes(n);
	cout << ans << endl;

	return 0;
}