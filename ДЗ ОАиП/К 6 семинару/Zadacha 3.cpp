/*
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");

    char i[100];
    cout << "������� ������: ";
    cin.getline(i, 100);

    int wr = 0;
    int length = strlen(i);

    for (int rd = 0; rd < length; rd++) {
        if (!isdigit(i[rd])) {
            i[wr] = i[rd];
            wr++;
        }
    }
    i[wr] = '\0';

    cout << "���������: " << i << endl;
    return 0;
}
*/