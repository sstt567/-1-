/*
#include <iostream>
#include <cstring>
#include <cctype>

bool isPalindrome(const char* str) {
	setlocale(LC_ALL, "RU");
	int length = strlen(str); 
	for (int i = 0; i < length / 2; ++i) { 

		if (tolower(str[i]) != tolower(str[length - i - 1])) {
			return false; 
		}
	}
	return true; 
}
int main() {
	setlocale(LC_ALL, "RU");
	char str[100];
	std::cout << "Введите строку: ";
	std::cin.getline(str, 100); 
	if (isPalindrome(str)) { 
		std::cout << "Это палиндром." << std::endl; 
	}
	else {
		std::cout << "Это не палиндром." << std::endl; 
	}
	return 0;
}
*/