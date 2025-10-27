#include <iostream>
using namespace std;

int main() {
    /*Написати програму, яка копіює послідовно елементи одного масиву розміром 10 елементів у 2 масиви розміром 5 елементів кожен.*/
   /* const int SIZE1 = 10;
    const int SIZE2 = 5;
    int arr[SIZE1];
    int arr1[SIZE2];
    int arr2[SIZE2];

    cout << "Enter 10 elemennts of array: ";
    cout << endl;
    for (int i = 0; i < SIZE1; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    for (int i = 0; i < SIZE2; i++) {
        arr1[i] = arr[i];
    }

    for (int i = 0; i < SIZE2; i++) {
        arr2[i] = arr[i + SIZE2];
    }

    cout << endl;
    cout << "1 array: ";
    for (int i = 0; i < SIZE2; i++) {
        cout << arr1[i] << " ";
    }

    cout << endl;
    cout << "2 array: ";
    for (int i = 0; i < SIZE2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;*/


    /*Напишіть програму, яка виконує поелементну суму двох масивів і результат заносить у третій масив.*/
    const int SIZE = 10; 
    int arr1[SIZE];
    int arr2[SIZE];
    int sumArr[SIZE];

    cout << "Enter " << SIZE << " elements for first array: ";
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr1[" << i << "] = ";
        cin >> arr1[i];
    }

    cout << "Enter " << SIZE << " elements for second array: ";
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr2[" << i << "] = ";
        cin >> arr2[i];
    }

    for (int i = 0; i < SIZE; i++) {
        sumArr[i] = arr1[i] + arr2[i];
    }

    cout << "Result ::";
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "sumArr[" << i << "] = " << sumArr[i] << endl;
    }

}
