#include<iostream>
using namespace std;

int N, K;
int A[201];

int solution() {
	int res = 0;
	int zero_cnt = 0;
	int robot[200 * 1000];
	int front = 0, back = 0;

	while (zero_cnt < K) {
		res++;

		int temp = A[2 * N - 1]; //컨베이어벨트 회전
		for (int i = 2 * N - 1; i >= 1; i--) {
			A[i] = A[i - 1];
		}
		A[0] = temp;

		for (int i = front; i < back; i++) {
			robot[i]++;
			if (robot[i] == N - 1) {
				front++;
			}
		}

		//로봇 이동시키기
		for (int i = front; i < back; i++) {
			int next = robot[i] + 1;
			if (A[next] == 0 || (i != front && robot[i - 1] == next)) continue;
			robot[i] = next;
			if (robot[i] == N - 1) {
				front++;
			}
			A[next]--;
			if (A[next] == 0) {
				zero_cnt++;
			}
		}

		//로봇 올리기
		if (A[0] > 0 && (robot[back - 1] != 0 || back == 0)) {
			robot[back++] = 0;
			A[0]--;
			if (A[0] == 0) zero_cnt++;
		}
	}

	return res;
}

int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> A[i * 2] >> A[i * 2 + 1];
	}
	int ans = solution();
	cout << ans << endl;
	return 0;
}