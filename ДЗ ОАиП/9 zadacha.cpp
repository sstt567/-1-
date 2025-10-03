/*
#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	int sum = 0;
	cout << "Введите число:";
	cin >> n;
	if (n < 1) {
		cout << "Число должно быть больше 1";
	}
	else {
		for (int i = 1; i <= n; i++) {

			if (i % 2 == 0 || i % 5 == 0) {
				sum += i;
			}
		}

		cout << "Сумма чисел от 1 до " << n << ", делящихся на 2 или на 5:" << sum << endl;
	}
	return 0;
}
*/