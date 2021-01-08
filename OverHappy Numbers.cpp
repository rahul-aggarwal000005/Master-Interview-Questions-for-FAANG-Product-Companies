#include <bits/stdc++.h>
using namespace std;

int getValue(int n) {
	int sum = 0;
	while (n != 0) {
		int v = n % 10;
		sum += v * v;
		n = n / 10;
	}

	return sum;
}

bool isOverHappy(int n) {


	/*
		run an infinite loop till the n reaches the state where it is the
		multiple of 10
	*/
	unordered_set<int> s;
	while (true) {
		int val = getValue(n);
		if (val == 1) return true;
		if (s.find(val) == s.end()) {
			s.insert(val);
			n = val;
		}
		else return false;
	}

	return true;
}

int main() {

#ifndef FAANG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	if (isOverHappy(n)) {
		cout << "true";
	} else {
		cout << "false";
	}

	return 0;
}