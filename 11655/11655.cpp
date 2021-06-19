#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(int ac, char **av) {
	string str;
	int i, l, b, v;
	getline(cin, str);
	for (i = 0, l = str.size(); i < l; i++) {
		if (isalpha(str[i])) {
			if (isupper(str[i])) {
				b = 90;
			} else {
				b = 122;
			}
			v = (int)str[i] + 13;
			if (v <= b) {
				cout << (char)v;
			} else {
				cout << (char)(v - 26);
			}
		} else {
			cout << str[i];
		}
	}
	cout << endl;
	return 0;
}
