#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	string s_result;
	int len = s.size() - 1;
	bool flag = 0;
	int i = 0;
	while ((s[i] == s[len - i]) && (i < len / 2)) {
		i++; // i - номер первого несоответствия
	}
	string s1 = s.substr(0, i + 1);
	string s2 = s.substr(len - i, len);
	reverse(s2.begin(), s2.end());
	if (s1 == s2) {
		s_result = s1 + s[i] + s.substr(i + 1, len);
		flag = 1;
	}
	else if (s1.substr(0, i) + s2[i] + s1[i] == s2 + s1[i]) {
		s_result = s2 + s1[i] + s.substr(i + 1, len);
		flag = 1;
	}
	else if (s1 + s2[i] == s2.substr(0, i) + s1[i] + s2[i]) {
		s_result = s1 + s2[i] + s.substr(i + 1, len);
		flag = 1;
	}
	int l = s_result.size() - 1;
	i = 0;
	while ((s_result[i] == s_result[l - i]) && (i < l)) {
		i++; // i - кол-во соответствий символов
	}
	if (i != l) {
		flag = 0;
	}
	if (flag == 1) {
		cout << s_result << endl;
	}
	else cout << "NA" << endl;
	return 0;
}