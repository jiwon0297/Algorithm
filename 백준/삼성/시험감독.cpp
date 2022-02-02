#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int N, B, C;
long long ans;
vector<int> A;

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		A.push_back(a);
	}

	cin >> B >> C;

	ans = 0;
	for (int i = 0; i < N; i++) {
		int num = A[i] - B;
		ans++;
		if (num > 0) {
			if (num % C == 0) {
				ans += (num / C);
			}
			else {
				ans += ((num / C) + 1);
			}
		}
	}

	cout << ans << "\n";

	return 0;
}