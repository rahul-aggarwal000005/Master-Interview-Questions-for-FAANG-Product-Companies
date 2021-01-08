#include <bits/stdc++.h>
using namespace std;

bool isOverLapping(int x0, int x1, int y0, int y1, int a0, int a1, int b0, int b1) {
	if (x1 <= a0 or y0 >= b1 or x0 >= a1 or y1 <= b0) return false;
	return true;
}

int main() {

#ifndef FAANG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x0, y0, x1, y1;
	int a0, b0, a1, b1;

	cin >> x0 >> y0 >> x1 >> y1;
	cin >> a0 >> b0 >> a1 >> b1;
	cout << isOverLapping(x0, x1, y0, y1, a0, a1, b0, b1) << endl;
	return 0;
}