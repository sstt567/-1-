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
	std::cout << "������� ������: ";
	std::cin.getline(str, 100); 
	if (isPalindrome(str)) { 
		std::cout << "��� ���������." << std::endl; 
	}
	else {
		std::cout << "��� �� ���������." << std::endl; 
	}
	return 0;
}
*/