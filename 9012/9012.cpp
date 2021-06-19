#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(int ac, char **av) {
	int T, l, i, j;
	string str;
	cin >> T;
	for (i = 0; i < T; i++) {
		stack<char> s;
		cin >> str;
		for (j = 0, l = str.size(); j < l; j++) {
			if (str[j] == '(') {
				s.push(str[j]);
			} else {
				if (!s.empty()) {
					if (s.top() == '(') {
						s.pop();
					} else {
						s.push(str[j]);
					}
				} else {
					s.push(str[j]);
				}
			}
		}
		if (s.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	cout << endl;
	return 0;
}

