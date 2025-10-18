/*
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    char r[100];
    cout << "Введите строку: ";
    cin.getline(r, 100);

    int v = 0, con = 0;
    int length = strlen(r);
    const char* vowelCh = "aeiouy";

    for (int i = 0; i < length; i++) {
        char ch = tolower(i[r]);

        if (isalpha(ch)) {
            bool isVowel = false;
            for (int j = 0; vowelCh[j] != '\0'; j++) {
                if (ch == vowelCh[j]) {
                    isVowel = true;
                    break;
                }
            }

            if (isVowel) {
                v++;
            }
            else {
                con++;
            }
        }
    }

    cout << "Гласных: " << v << endl;
    cout << "Согласных: " << con << endl;
    return 0;
}
*/