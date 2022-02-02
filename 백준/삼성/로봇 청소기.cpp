#include<iostream>
#include<queue>
using namespace std;


struct ROBOT {
	int y, x, dir;
};

int N, M;
int map[50][50];

ROBOT robot;

const int dy[] = { -1,0,1,0 };
const int dx[] = { 0,1,0,-1 };

int main() {
	cin >> N >> M;
	cin >> robot.y >> robot.x >> robot.dir;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}

	queue<ROBOT> q;
	q.push(robot);

	int ans = 0;
	while (!q.empty()) {
		ROBOT cur = q.front();
		q.pop();

		if (map[cur.y][cur.x] == 0) {
			map[cur.y][cur.x] = 2;
			ans++;
		}

		for (int dir = 0; dir < 4; dir++) {
			ROBOT next;
			next.dir = (cur.dir + 3 - dir) % 4;
			next.y = cur.y + dy[next.dir];
			next.x = cur.x + dx[next.dir];

			if (next.y < 0 || next.y >= N || next.x < 0 || next.x >= M
				|| map[next.y][next.x] != 0 ) {
				continue;
			}

			q.push(next);
			break;
		}

		if (q.empty()) {
			ROBOT next;
			next.dir = cur.dir;
			next.y = cur.y + dy[(next.dir + 2) % 4];
			next.x = cur.x + dx[(next.dir + 2) % 4];

			if (next.y < 0 || next.y >= N || next.x < 0 || next.x >= M
				|| map[next.y][next.x] == 1) {
				break;
			}

			q.push(next);
		}
	}

	cout << ans << endl;
	return 0;
}