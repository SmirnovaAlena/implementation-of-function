#include<iostream>
using namespace std;
//    функция конверирует строку в число и возвращает это число

int StringToNumber(char* str) {
	int i = 0;
	int count=0;
    while (str[i] && str[i] >= '0' && str[i] <= '9') {
		count = count * 10 +(str[i]-'0');
        i++;
    }
	return count;
}
int main() {
	char* str1 = new char[128];
	cin >> str1;
	cout << StringToNumber(str1);
}
