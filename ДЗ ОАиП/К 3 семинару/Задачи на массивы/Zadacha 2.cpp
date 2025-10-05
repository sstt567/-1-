/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите количество элементов последоватеьности:";
	cin >> n;

	int R[1000];
	for (int i = 0; i < n; i++)
		R[i] = i;
   
    int odd = -1; 
    int count = 0; 

    for (int i = 0; i < n; i++) {
        
        if (R[i] % 2 == 0) {
           
            count++;
        }
        else {
            
            if (odd == -1 || R[i] > odd) {
                odd = R[i];
            }
        }
    }

    cout << "Количество четных чисел: " << count << endl;

    if (odd == -1) {
        cout << "Нечетных чисел в последовательности нет" << endl;
    }
    else {
        cout << "Наибольшее нечетное число: " << odd << endl;
    }

    return 0;
}
*/