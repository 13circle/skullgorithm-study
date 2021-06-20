#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int h[9], c[7], i, j, k, e1, e2, s, p;
	for (i = 0; i < 9; scanf("%d", h + i), i++);
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (i != j) {
				for (k = s = p = 0; k < 9; k++) {
					if (i != k && j != k) {
						s += c[p] = h[k];
						p++;
					}
				}
				if (s == 100) {
					sort(c, c + 7);
					for (k = 0; k < 7; k++) {
						printf("%d\n", c[k]);
					}
					break;
				}
			}
		}
		if (s == 100) {
			break;
		}
	}
	return 0;
}
