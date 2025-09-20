// Suanov S. Лабороторная работа по Информатике.Вариант 3//


//1 zadacha//

/*
#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a=0;
	cout << "Введите температуру:";
	cin >> a;
	if (a < 0) {
		cout << "Наденьте зимнюю одежду";
	}
	else if (a >= 0 && a <= 10) {
		cout << "Наденьте тёплую одежду";
	}
	else if (a >= 11 && a <= 20) {
		cout << "Наденьте лёгкую одежду";
	}
	else {
		cout << "Наденьте летнюю одежду";
	}
	return 0;
*/


//2 zadacha//
/*
#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n = 0;
	cout << "Введите количество остановок:";
	cin >> n;
	int i = 5 * n;
	if (n <= 0) {
		cout << "Число остановок должно быть положительным";
	}
	else {
		cout << "Стоимость проезда:" << i << " рублей";
	}
	return 0;
}
*/