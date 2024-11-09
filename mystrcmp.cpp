#include<iostream>
using namespace std;
int mystrcmp(const char* str1, const char* str2) {
	int size1 = 0;
	int size2 = 0;
	while (*str1 != '\0') {
			size1 += 1;
			str1 += 1;
		}
		while (*str2 != '\0') {
			size2 += 1;
			str2 += 1;
		}
	
		if (size1 == size2) {
			return 0;
		}
		else if (size1 < size2) {
			return -1;
		}
		else {
			return 1;
		}
		cout << endl;
	}
	int main() {
		char* str1 = new char[128];
	char* str2 = new char[128];
		cout << "enter first string: " << endl;
		cin >> str1;
		cout << "enter second string: " << endl;
		cin >> str2;
		cout << mystrcmp(str1, str2);
	}