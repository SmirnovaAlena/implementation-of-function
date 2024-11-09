#include<iostream>
using namespace std;
//  функция осуществляет поиск символа s в строке str

char* mystrchr(char* str, char s) {
	while (*str != '\0') {

		if (*str == s)
		{
			return str;
		} str++;
	}
	return 0;
}

int main() {
	char* str = new char[128];
	char s;
	cin >> str >> s;
	cout << mystrchr(str, s);
}