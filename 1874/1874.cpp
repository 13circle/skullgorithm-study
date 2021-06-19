#include <cstdio>
#include <stack>
#include <list>
using namespace std;
int main(int ac, char **av) {
	int len, i, j, n[100000];
	stack<int> s;
	list<char> l;
	list<char>::iterator it;
	scanf("%d", &len);
	for (i = 0; i < len; scanf("%d", n + i), i++);
	for (i = j = 0; j < len; j++) {
		s.push(j + 1);
		l.push_back('+');
		while (i < len) {
			if (s.empty()) {
				break;
			}
			if (s.top() == n[i]) {
				s.pop();
				i++;
				l.push_back('-');
			} else {
				break;
			}
		}
	}
	if (!s.empty()) {
		printf("NO\n");
	} else {
		for (it = l.begin(); it != l.end(); it++) {
			printf("%c\n", *it);
		}
	}
	return 0;
}

