#include <cstdio>
#include <stack>
using namespace std;
int main() {
	stack<char> s;
	int c;
	bool rev = true;
	while((c = getchar()) != EOF) {
		if (c == '<') rev = false;
		if (c == '>') rev = true;
		if (rev && (('a' <= c && c <= 'z') || '0' <= c && c <= '9')) {
			s.push(c);
		} else {
			while (!s.empty()) {
				putchar(s.top());
				s.pop();
			}
			putchar(c);
		}
	}
	return 0;
}
