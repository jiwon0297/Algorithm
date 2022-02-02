#include<iostream>
using namespace std;

int N, L, ans = 0;
int map[200][100];


int main() {
	cin >> N >> L;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			map[N + i][j] = map[j][i];
		}
	}

	int count = 0;
	int x,y;
	for (x = 0; x < 2 * N; x++) {
		count = 1;
		for (y = 0; y < N - 1; y++) {
			if (map[x][y] == map[x][y + 1]) {
				count++;
			}
			else if (map[x][y] + 1 == map[x][y + 1] && count >= L) {
				count = 1;
			}
			else if (map[x][y] - 1 == map[x][y + 1] && count >= 0) {
				count = 1 - L;
			}
			else {
				break;
			}
		}
		if (y == (N - 1) && count >= 0) ans++;
	}

	cout << ans << "\n";

	return 0;
}