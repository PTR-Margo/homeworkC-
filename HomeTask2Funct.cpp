#include <iostream>

using namespace std;

void MinMax(int arr[], int size) {
    /*Написати функцію, що визначає мінімум
і максимум (значення й номер) елементів переданого їй
масиву.*/
    int minVal = arr[0];
    int maxVal = arr[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }
    cout << "Minimum value :: " << minVal << ";" << " index :: " << minIndex << endl;
    cout << "Maximum value :: " << maxVal << ";" << " index :: " << maxIndex << endl;
}
int main() {
    const int SIZE = 10;
    int arr[SIZE];

    cout << "Enter 10 numbers --> ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    MinMax(arr, SIZE);
}

//bool isPrime(int n) {
// /*Написати функцію, яка повертає кількість простих чисел у переданому їй масиві.*/
//    if (n <= 1)
//        return false;
//    for (int i = 2; i <= n / 2; i++) {
//        if (n % i == 0)
//            return false;
//    }
//    return true;
//}
//
//int countPrimes(int arr[], int size) {
//    int count = 0;
//    for (int i = 0; i < size; i++) {
//        if (isPrime(arr[i])) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    const int SIZE = 10;
//    int arr[SIZE];
//
//    cout << "Enter 10 numbers --> ";
//    for (int i = 0; i < SIZE; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "Count of prime numbers :: " << countPrimes(arr, SIZE) << endl;
//}