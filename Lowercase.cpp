#include<iostream>
using namespace std;
//      перевод в нижний регистр    

char* Lowercase(char* str) {
	while (*str != '\0') {
		*str = *str + 32;
		cout << * str;
		str++;

	}
	return str;
}
int main() {
	char* str1 = new char[256];
	cout << "enter string: " << endl;
	cin >> str1;
	cout << Lowercase(str1);
}
