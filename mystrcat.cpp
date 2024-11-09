#include<iostream>
using namespace std;
// функция присоединяет строку str2 к строке str1 

char* mystrcat(char* str1, const char* str2) {
	int i, j;
	for ( i = 0; str1[i] != '\0'; i++);
	for ( j = 0; str2[j] != '\0'; j++) {
		str1[i+j] = str2[j];
	}
	return str1;
}
int main() {
    char str1[256];
    cin >> str1;
	const char* str2 = "asdf";
    cout << mystrcat(str1, str2);
}