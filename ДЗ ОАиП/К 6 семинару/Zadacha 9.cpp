/*
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    char str1[100], str2[100];
    cout << "Введите первую строку: ";
    cin.getline(str1, 100);
    cout << "Введите вторую строку: ";
    cin.getline(str2, 100);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int** dp = new int* [len1 + 1];
    for (int i = 0; i <= len1; i++) {
        dp[i] = new int[len2 + 1];
        
        for (int j = 0; j <= len2; j++) {
            dp[i][j] = 0;
        }
    }

    int ml = 0;  
    int end = 0;  

    
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > ml) {
                    ml = dp[i][j];
                    end = i - 1;  
                }
            }
            else {
                dp[i][j] = 0;
            }
        }
    }

    
    if (ml > 0) {
        cout << "Наибольшая общая подстрока: \"";
       
        for (int i = end - ml + 1; i <= end; i++) {
            cout << str1[i];
        }
        cout << "\"" << endl;
        cout << "Длина: " << ml << endl;
    }
    else {
        cout << "Общих подстрок не найдено" << endl;
    }

    
    for (int i = 0; i <= len1; i++) {
        delete[] dp[i];
    }
    delete[] dp;

    return 0;
}
*/