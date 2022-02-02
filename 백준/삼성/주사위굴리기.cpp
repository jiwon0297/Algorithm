#include<iostream>
#include<algorithm>
using namespace std;

typedef struct {
	int y, x;
}Dir;

Dir movedir[4] = { {1,0},{-1,0},{0,1},{0,-1} };

int N, M, x, y, K;
int map[21][21];
int dice[4][3] = { {0,0,0},{0,0,0},{0,0,0},{0,0,0} };
int temp[4][3];

void copy() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			temp[i][j] = dice[i][j];
		}
	}
}

//북쪽
void north() {
	copy();
	for (int i = 0; i < 4; i++) {
		dice[i][1] = temp[(i + 1) % 4][1];
	}
}

//남쪽
void south() {
	copy();
	for (int i = 0; i < 4; i++) {
		dice[i][1] = temp[(i + 3) % 4][1];
	}
}

//동쪽
void east() {
	copy();
	dice[1][0] = temp[3][1];
	dice[1][1] = temp[1][0];
	dice[1][2] = temp[1][1];
	dice[3][1] = temp[1][2];
}

//서쪽
void west() {
	copy();
	dice[1][0] = temp[1][1];
	dice[1][1] = temp[1][2];
	dice[1][2] = temp[3][1];
	dice[3][1] = temp[1][0];
}

//문제조건
void func(int y, int x) {
	//해당 칸에 숫자가 있으면
	if (map[y][x]) {
		//해당 숫자를 주사위에 복사
		dice[3][1] = map[y][x];
		//해당 칸 숫자를 0으로 초기화
		map[y][x] = 0;
	}
	//없으면
	else
		//주사위 바닥면에 있는 숫자 해당칸에 복사
		map[y][x] = dice[3][1];

	//주사위 윗면 출력
	cout << dice[1][1] << "\n";
}

int main() {
	cin >> N >> M >> y >> x >> K;

	pair<int, int> cur = { y,x };
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < K; i++) {
		int dir;
		cin >> dir;

		switch (dir) {
		case 1:
			if (cur.second + 1 < M) {
				east();
				cur.second += 1;
				func(cur.first, cur.second);
			}
			break;

		case 2:
			if (cur.second - 1 >= 0) {
				west();
				cur.second -= 1;
				func(cur.first, cur.second);
			}
			break;
			
		case 3:
			if (cur.first - 1 >= 0) {
				north();
				cur.first -= 1;
				func(cur.first, cur.second);
			}
			break;

		case 4:
			if (cur.first + 1 < N) {
				south();
				cur.first += 1;
				func(cur.first, cur.second);
			}
			break;
		}
	}

	return 0;
}