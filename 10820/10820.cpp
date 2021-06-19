#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
using namespace std;
int main(int ac, char **av) {
	string str;
	int i, len, l, u, n, s;
	while (getline(cin, str)) {
		for (i = l = u = n = s = 0, len = str.size(); i < len; i++) {
			if (isspace(str[i])) {
				s++;
			} else if (islower(str[i])) {
				l++;
			} else if (isupper(str[i])) {
				u++;
			} else {
				n++;
			}
		}
		printf("%d %d %d %d \n", l, u, n, s);
	}
	return 0;
}
