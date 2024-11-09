#include<iostream>
using namespace std;
char* mystrstr(char* str1, char* str2) {
    while (*str1 != '\0')
    {
        if (*str1 == *str2)
        {
            return str1;
        }
        str1++;
    }
    return str1;
}

int main() {
	char* str1 = new char[128];
	char* str2 = new char[128];
	cin >> str1;
	cin >> str2;
	cout << mystrstr(str1, str2);
}