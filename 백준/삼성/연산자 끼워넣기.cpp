#include<iostream>
#include<vector>
using namespace std;

int N;
int num[11], op[4];

int minn = 2147000000, maxx = -2147000000;

void dfs(int res, int idx) {
	if (idx == N - 1) {
		if (minn > res) minn = res;
		if (maxx < res) maxx = res;
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (op[i] > 0) {
			op[i]--;

			if (i == 0) { //µ¡¼À
				dfs(res + num[idx + 1], idx + 1);
			}
			else if (i == 1) { //»¬¼À
				dfs(res - num[idx + 1], idx + 1);
			}
			else if (i == 2) { //°ö¼À
				dfs(res * num[idx + 1], idx + 1);
			}
			else if (i == 3) { //³ª´°¼À
				dfs(res / num[idx + 1], idx + 1);
			}

			op[i]++;
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	
	for (int i = 0; i < 4; i++) {
		cin >> op[i];
	}

	dfs(num[0], 0);
	cout << maxx << "\n" << minn << "\n";

	return 0;
}