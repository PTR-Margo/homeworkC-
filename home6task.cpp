#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// task1
//void InitMatrix(int arr[10][10], int n) {
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            arr[i][j] = rand() % 100;
//}
//
//void InitMatrix(double arr[10][10], int n) {
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            arr[i][j] = (rand() % 1000) / 10.0;
//}
//
//void InitMatrix(char arr[10][10], int n) {
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            arr[i][j] = 'A' + rand() % 26;
//}
//
//void ShowMatrix(int arr[10][10], int n) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++)
//            cout << arr[i][j] << "\t";
//        cout << endl;
//    }
//}
//
//void ShowMatrix(double arr[10][10], int n) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++)
//            cout << arr[i][j] << "\t";
//        cout << endl;
//    }
//}
//
//void ShowMatrix(char arr[10][10], int n) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++)
//            cout << arr[i][j] << "\t";
//        cout << endl;
//    }
//}
//
//void DiagonalMinMax(int arr[10][10], int n) {
//    int minVal = arr[0][0], maxVal = arr[0][0];
//    for (int i = 0; i < n; i++) {
//        if (arr[i][i] < minVal) minVal = arr[i][i];
//        if (arr[i][i] > maxVal) maxVal = arr[i][i];
//    }
//    cout << "Min = " << minVal << ", Max = " << maxVal << endl;
//}
//
//void DiagonalMinMax(double arr[10][10], int n) {
//    double minVal = arr[0][0], maxVal = arr[0][0];
//    for (int i = 0; i < n; i++) {
//        if (arr[i][i] < minVal) minVal = arr[i][i];
//        if (arr[i][i] > maxVal) maxVal = arr[i][i];
//    }
//    cout << "Min = " << minVal << ", Max = " << maxVal << endl;
//}
//
//void DiagonalMinMax(char arr[10][10], int n) {
//    char minVal = arr[0][0], maxVal = arr[0][0];
//    for (int i = 0; i < n; i++) {
//        if (arr[i][i] < minVal) minVal = arr[i][i];
//        if (arr[i][i] > maxVal) maxVal = arr[i][i];
//    }
//    cout << "Min = " << minVal << ", Max = " << maxVal << endl;
//}
//
//void SortRows(int arr[10][10], int n) {
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n - 1; j++)
//            for (int k = j + 1; k < n; k++)
//                if (arr[i][j] > arr[i][k])
//                    swap(arr[i][j], arr[i][k]);
//}

// task2
int GCD(int a, int b) {
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

// task3
//void GenerateNumber(char num[5]) {
//    int i = 0;
//    while (i < 4) {
//        char c = '0' + rand() % 10;
//        bool exists = false;
//        for (int j = 0; j < i; j++)
//            if (num[j] == c)
//                exists = true;
//        if (!exists)
//            num[i++] = c;
//    }
//    num[4] = '\0';
//}
//
//int BullsAndCows(char secret[5], int tries = 1) {
//    char guess[5];
//    cout << "Enter your guess (4 digits): ";
//    cin >> guess;
//
//    int bulls = 0, cows = 0;
//
//    for (int i = 0; i < 4; i++) {
//        if (guess[i] == secret[i])
//            bulls++;
//        else {
//            for (int j = 0; j < 4; j++)
//                if (guess[i] == secret[j])
//                    cows++;
//        }
//    }
//
//    cout << "Bulls: " << bulls << ", Cows: " << cows << endl;
//
//    if (bulls == 4) {
//        cout << "You guessed it in " << tries << " tries!" << endl;
//        return tries;
//    }
//    else {
//        return BullsAndCows(secret, tries + 1);
//    }
//}

int main() {
    srand(time(0));

    // task1
    /*int n = 3;
    int arr[10][10];
    InitMatrix(arr, n);
    ShowMatrix(arr, n);
    DiagonalMinMax(arr, n);
    SortRows(arr, n);
    cout << "After sorting:\n";
    ShowMatrix(arr, n);*/

    // task2
    int a, b;
    cout << "\nEnter two numbers: ";
    cin >> a >> b;
    cout << "GCD = " << GCD(a, b) << endl;

    // task3
    /*cout << "\nLet's play Bulls and Cows!\n";
    char secret[5];
    GenerateNumber(secret);
    BullsAndCows(secret);*/
}
