#include <cstdio>
#include <queue>
using namespace std;
int main() {
	int N, K, i, c, n;
	queue<int> q;
	scanf("%d%d", &N, &K);
	for (i = 0; i < N; q.push(i + 1), i++);
	for (putchar('<'), c = 1; c <= N; c++) {
		for (i = 1; i <= K; i++) {
			n = q.front();
			q.pop();
			if (i < K) q.push(n);
		}
		printf(c < N ? "%d, " : "%d>\n", n);
	}
	return 0;
}
