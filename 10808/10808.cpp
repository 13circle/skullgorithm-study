#include <cstdio>
#include <cstring>
using namespace std;
int main() {
	int c, i, a[26];
	memset(a, 0, sizeof(a));
	while ((c = getchar()) != EOF) {
		a[c - 97]++;
	}
	for (i = 0; i < 26; printf("%d ", a[i]), i++);
	putchar('\n');
	return 0;
}
