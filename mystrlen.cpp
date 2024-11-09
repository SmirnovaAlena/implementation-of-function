#include<iostream>
using namespace std;
//  функция определяет длину строки.

int mystrlen(const char* str) {
int len = 0;
while (*str != '\0') {
	len += 1;
	str += 1;
}
return len;
}

int main() {
	char str[256];
	cin >> str;
	cout << "size string: " << mystrlen(str);

}