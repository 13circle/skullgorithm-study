#include <cstdio>
#include <cstring>
#include <list>
using namespace std;
bool compare(const char *a, const char *b) {
	return strcmp(a, b) < 0;
}
int main() {
	char s[1001];
	list<char*> d;
	list<char*>::iterator it;
	int i, l;
	scanf("%s", s);
	for (i = 0, l = strlen(s); i < l; i++) {
		d.push_back(s + i);
	}
	d.sort(compare);
	for (it = d.begin(); it != d.end(); it++) {
		printf("%s\n", *it);
	}
	return 0;
}
