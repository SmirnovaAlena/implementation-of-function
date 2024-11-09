#include<iostream>
using namespace std;
char* mystrrev(char* str) {
	int size = 0, lenght = 0;
	while (*str != '\0') {
		size += 1;
		str += 1;		
	}
	int a = size;
	while (a != 0) {
		a -= 1;
		str -= 1;
	}
	for (int i = size; i >= 0; i--) {
		size -= 1;
		cout << str[i];
	}
	return str;
}

int main() {
	char* str1 = new char[128];
	cout << "enter string: " << endl;
	cin >> str1;
	mystrrev(str1);
}

