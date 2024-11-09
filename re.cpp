using namespace std;
#include <iostream>

//1   фунуция сравнивает 2 строки и если строки равны возвращает 0, есле 1 строка > 2 строки возвращает 1, иначе -1

//int mystrcmp(const char* str1, const char* str2) {
//	int size1 = 0;
//	int size2 = 0;
//	while (*str1 != '\0') {
//		size1 += 1;
//		str1 += 1;
//	}
//	while (*str2 != '\0') {
//		size2 += 1;
//		str2 += 1;
//	}
//
//	if (size1 == size2) {
//		return 0;
//	}
//	else if (size1 < size2) {
//		return -1;
//	}
//	else {
//		return 1;
//	}
//	cout << endl;
//}
//int main() {
//	char* str1 = new char[128];
//	char* str2 = new char[128];
//	cout << "enter first string: " << endl;
//	cin >> str1;
//	cout << "enter second string: " << endl;
//	cin >> str2;
//	cout << mystrcmp(str1, str2);
//}

//2    функция конверирует строку в число и возвращает это число

//int StringToNumber(char* str) {
//	int i = 0;
//	int count=0;
//    while (str[i] && str[i] >= '0' && str[i] <= '9') {
//		count = count * 10 +(str[i]-'0');
//        i++;
//    }
//	return count;
//}
//int main() {
//	char* str1 = new char[128];
//	cin >> str1;
//	cout << StringToNumber(str1);
//}

//3      функция конвертирует число в строку и возвращает указатель на эту строку

//char* NumberToString(int number) {
//  char *s=new char[256];
//  int k = 1;
//  while (number) {
//    k++;
//    int m = number % 10;
//	number = number / 10;
//    s[k - 1] = m + '0';
//    
//  }
//  
//  char* t = new char[k];
//  for (int i = k; i > 0; i--) {
//    t[k - i] = s[i];
//  }
//}
//int main() {
//	int n;
//	cin >> n;
//	cout << NumberToString(n);
//	return 0;
//}

//4     перевод в верхний регистр

/*char* Uppercase(char* str) {
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
}*/

//5      перевод в нижний регистр     УРА 7 ГРЁБАННЫХ ЧАСОВ СПУСТЯ

//char* Lowercase(char* str) {
//	while (*str != '\0') {
//		*str = *str + 32;
//		cout << * str;
//		str++;
//
//	}
//	return str;
//}
//int main() {
//	char* str1 = new char[256];
//	cout << "enter string: " << endl;
//	cin >> str1;
//	cout << Lowercase(str1);
//}

// 6 

//char* mystrrev(char* str) {
//	int size = 0, lenght = 0;
//	while (*str != '\0') {
//		size += 1;
//		str += 1;		
//	}
//	int a = size;
//	while (a != 0) {
//		a -= 1;
//		str -= 1;
//	}
//	for (int i = size; i >= 0; i--) {
//		size -= 1;
//		cout << str[i];
//	}
//	return str;
//}
//
//int main() {
//	char* str1 = new char[128];
//	cout << "enter string: " << endl;
//	cin >> str1;
//	mystrrev(str1);
//}

//1   функция определяет длину строки.

//int mystrlen(const char* str) {
//int len = 0;
//while (*str != '\0') {
//	len += 1;
//	str += 1;
//}
//return len;
//}
//
//int main() {
//	char str[256];
//	cin >> str;
//	cout << "size string: " << mystrlen(str);
//
//}

// 2 копирует строку str2 в буфер, адресуемый через str1.

//char* mystrcpy(char* str1, const char* str2) {
//	string buf;
//	char* str2 = *str1;
//	buf = string(str2);
//	return str1;
//}
//
//int main() {
//	char* str2 = new char[128];
//	cin >> str2;
//	const char str1[256] = {};
//	cout << mystrcpy(str2, str1);
//}

//3 функция присоединяет строку str2 к строке str1 (раб только если str1 НЕ вводит пользователь)

//char* mystrcat(char* str1, const char* str2) {
//	int i, j;
//	for ( i = 0; str1[i] != '\0'; i++);
//	for ( j = 0; str2[j] != '\0'; j++) {
//		str1[i+j] = str2[j];
//	}
//	return str1;
//}
//int main() {
//    char str1[256];
//    cin >> str1;
//	const char* str2 = "asdf";
//    cout << mystrcat(str1, str2);
//}

//4  функция осуществляет поиск символа s в строке str

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

// 5

//char* mystrstr(char* str1, char* str2) {
//    while (*str1 != '\0')
//    {
//        if (*str1 == *str2)
//        {
//            return str1;
//        }
//        str1++;
//    }
//    return str1;
//}
//
//int main() {
//	char* str1 = new char[128];
//	char* str2 = new char[128];
//	cin >> str1;
//	cin >> str2;
//	cout << mystrstr(str1, str2);
//}