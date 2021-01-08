#include <bits/stdc++.h>
using namespace std;

bool canPlace(int board[][9], int i, int j, int n, int val) {
	for (int x = 0; x < n; x++) {
		if (board[i][x] == val or board[x][j] == val) return false;
	}

	int sx = (i / 3) * 3;
	int sy = (j / 3) * 3;

	for (int x = sx; x < sx + 3; x++) {
		for (int y = sy; y < sy + 3; y++) {
			if (board[x][y] == val) return false;
		}
	}
	return true;
}

bool solveBoard(int board[][9], int i, int j, int n) {
	if (i == n) return true;
	if (j == n) return solveBoard(board, i + 1, 0, n);
	if (board[i][j] != 0) return solveBoard(board, i, j + 1, n);

	for (int val = 1; val <= 9; val++) {
		if (canPlace(board, i, j, n, val)) {
			board[i][j] = val;
			if (solveBoard(board, i, j + 1, n)) return true;

			board[i][j] = 0;
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
	int board[9][9];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}

	bool ans = solveBoard(board, 0, 0, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}