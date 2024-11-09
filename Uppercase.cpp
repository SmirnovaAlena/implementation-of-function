#include<iostream>
using namespace std;
//    перевод в верхний регистр

char* Uppercase(char* str) {
	while (*str != '\0') {
		*str = *str - 32;
		cout << *str;
		str++;

	}
	return str;
}
int main() {
	char* str1 = new char[128];
	cout << "enter string: " << endl;
	cin >> str1;
	Uppercase(str1);
}
