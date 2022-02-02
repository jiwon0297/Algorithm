#include<iostream>
using namespace std;

int r, c, k;
int A[101][101];
int cnt;
int pre_row, cur_row;
int pre_col, cur_col;

void R_op(int y) {
	int bucket[101] = { 0, };
	for (int x = 1; x <= pre_col; x++) {
		bucket[A[y][x]]++;
		//bucket[3]=5 => A[i] row에 3이라는 값이 5번 반복되었다는 뜻
	}

	int size = 0;
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (bucket[j] == i) {
				A[y][++size] = j;
				A[y][++size] = i;

				if (size == 100) break;
			}
		}
		if (size == 100) break;
	}

	for (int i = size + 1; i <= pre_col; i++) {
		A[y][i] = 0;
	}

	if (cur_col < size) cur_col = size;
}

void C_op(int x) {
	int bucket[101] = { 0, };
	for (int y = 1; y <= pre_row; y++) {
		bucket[A[y][x]]++;
	}

	int size = 0;
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (bucket[j] == i) {
				A[++size][x] = j;
				A[++size][x] = i;

				if (size == 100) break;
			}
		}
		if (size == 100) break;
	}

	for (int i = size + 1; i <= pre_row; i++) {
		A[i][x] = 0;
	}

	if (cur_row < size) cur_row = size;
}

void simulation() {
	while (A[r][c] != k) {
		if (cur_row >= cur_col) {
			//R연산
			pre_col = cur_col;
			cur_col = 0;

			for (int y = 1; y <= cur_row; y++) {
				R_op(y);
			}
		}
		else {
			//C연산
			pre_row = cur_row;
			cur_row = 0;

			for (int x = 1; x <= cur_col; x++) {
				C_op(x);
			}
		}
		cnt++;

		if (cnt > 100) break;
	}
}

int main() {
	pre_row = 3;
	cur_row = 3;
	pre_col = 3;
	cur_col = 3;

	cin >> r >> c >> k;
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			cin >> A[i][j];
		}
	}

	cnt = 0;
	simulation();

	if (cnt > 100) cout << "-1" << endl;
	else cout << cnt << endl;

	return 0;
}
