/*
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    char in[100];
    int s;

    cout << "Введите текст: ";
    cin.getline(in, 100);
    cout << "Введите сдвиг: ";
    cin >> s;

    int length = strlen(in);

    for (int i = 0; i < length; i++) {
        if (isupper(in[i])) {
            in[i] = (in[i] - 'A' + s) % 26 + 'A';
        }
        else if (islower(in[i])) {
            in[i] = (in[i] - 'a' + s) % 26 + 'a';
        }
    }

    cout << "Зашифрованный текст: " << in << endl;
    return 0;
}
*/