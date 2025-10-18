/*
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    char in[100];
    cout << "¬ведите текст: ";
    cin.getline(in, 100);

    int len = strlen(in);
    bool newS = true;

    for (int i = 0; i < len; i++) {
        if (newS && isalpha(in[i])) {
            in[i] = toupper(in[i]);
            newS = false;
        }
        else {
            in[i] = tolower(in[i]);
        }

        if (in[i] == '.' || in[i] == '!' || in[i] == '?') {
            newS = true;
        }
    }

    cout << "»справленный текст: " << in << endl;
    return 0;
}
*/