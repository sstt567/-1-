#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    char words[10][100];

  
    cout << "������� 10 ����:\n";
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ": ";
        cin >> words[i];
    }

    // 1. 
    int countB = 0;
    for (int i = 0; i < 10; i++) {
        if (tolower(words[i][0]) == 'b') countB++;
    }
    cout << "���� �� 'b': " << countB << endl;

    // 2. 
    int maxLen = 0;
    for (int i = 0; i < 10; i++) {
        int len = strlen(words[i]);
        if (len > maxLen) maxLen = len;
    }
    cout << "����. �����: " << maxLen << endl;

    // 3.
    int countC = 0;
    for (int i = 0; words[2][i] != '\0'; i++) {
        if (tolower(words[2][i]) == 'c') countC++;
    }
    cout << "'c' � ����� 3: " << countC << endl;

    // 4. 
    cout << "�������: ";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; words[i][j] != '\0'; j++) {
            words[i][j] = toupper(words[i][j]);
        }
        cout << words[i] << " ";
    }
    cout << endl;

    // 5. 
    int countMatch = 0;
    for (int i = 0; i < 10; i++) {
        int len = strlen(words[i]);
        if (len >= 2 && words[i][1] == words[i][len - 2]) countMatch++;
    }
    cout << "���������� 2 � �������������: " << countMatch << endl;

    // 6.
    int maxC = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            int len1 = strlen(words[i]);
            int len2 = strlen(words[j]);

            
            for (int pos1 = 0; pos1 < len1; pos1++) {
                for (int pos2 = 0; pos2 < len2; pos2++) {
                    int k = 0;
                    
                    while (pos1 + k < len1 && pos2 + k < len2 &&
                        words[i][pos1 + k] == words[j][pos2 + k]) {
                        k++;
                    }
                    if (k > maxC) maxC = k;
                }
            }
        }
    }
    cout << "����. ����� ���������: " << maxC << endl;

    return 0;
}
