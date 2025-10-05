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
	
int count = 0;


for (int i = 0; i < n; i++) {
    int k = i + 1; 
    
    int twok = 1;
    for (int j = 1; j <= k; j++) {
        twok *= 2;
    }

   
    if (R[i] > twok) {
        count++;
    }
}

cout << "Количество чисел, удовлетворяющих условию Ak > 2^k: " << count << endl;

return 0;
}
*/