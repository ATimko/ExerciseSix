#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

bool isPalindrome(string str);
string condense(string str);

int main() {
	cout << boolalpha << isPalindrome("racecar") << endl;
	cout << boolalpha << isPalindrome("aibohphobia") << endl;
	cout << boolalpha << isPalindrome("book") << endl;
	cout << boolalpha << isPalindrome("Madam, I'm Adam") << endl;
	system("pause");
	return 0;

}

bool isPalindrome(string str) {
	string condensed = condense(str);
	for (int i = 0; i < condensed.size() / 2; ++i) {
		if (condensed[i] != condensed[condensed.size() - 1 - i]) {
			return false;
		}
	}
	return true;
}

string condense(string str) {
	// c for condense
	string c;
	for (int i = 0; i < str.size(); ++i) {
		if ( !ispunct && !isspace(str[i]) ) {
		c += tolower(str[i]);
		}
	}
	cout << "c: " << c << endl;
	return c;
}