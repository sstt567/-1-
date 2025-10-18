/*
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    char in[100];
    cout << "Введите предложение: ";
    cin.getline(in, 100);

    int length = strlen(in);
    int start = 0;

    for (int i = 0; i <= length; i++) {
        if (in[i] == ' ' || in[i] == '\0') {
            int ws = start;
            int we = i - 1;

            while (ws < we) {
                char temp = in[ws];
                in[ws] = in[we];
                in[we] = temp;
                ws++;
                we--;
            }
            start = i + 1;
        }
    }

    cout << "Результат: " << in << endl;
    return 0;
}
*/