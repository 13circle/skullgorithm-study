#include <cstdio>
#include <list>
using namespace std;
int main() {
	char c;
	list<char> l;
	list<char>::iterator it;
	int T, i;
	while ((c = getchar()) != '\n') {
		l.push_back(c);
	}
	it = l.end();
	scanf("%d", &T);
	getchar();
	for (i = 0; i < T; i++) {
		c = getchar();
		switch (c) {
			case 'P':
				getchar();
				c = getchar();
				it = l.insert(it, c);
				it++;
				break;
			case 'B':
				if (!l.empty()) {
					if (it != l.begin()) {
						it--;
						it = l.erase(it);
					}
				}
				break;
			case 'L':
				if (it != l.begin()) {
					it--;
				}
				break;
			case 'D':
				if (it != l.end()) {
					it++;
				}
		}
		getchar();
	}
	for (it = l.begin(); it != l.end(); putchar(*it), it++);
	putchar('\n');
	return 0;
}
