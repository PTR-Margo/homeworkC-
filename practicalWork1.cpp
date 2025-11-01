#include <iostream>
using namespace std;

//#define SIZE 10
///*Дан масив чисел розмірністю 10 елементів.
//Написати функцію, яка сортує масив за зростанням або за
//спаданням, залежно від третього параметра функції. Якщо
//він дорівнює true, сортування йде за спаданням, якщо
//false, то за зростанням. Перші 2 параметри функції — це
//масив і його розмір, третій параметр за замовчуванням
//дорівнює false. */
//template <typename T>
//void SortArray(T arr[], int size, bool descending = false) {
//    T temp;
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            if ((descending && arr[j] < arr[j + 1]) || (!descending && arr[j] > arr[j + 1])) {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//template <typename T>
//void ShowArray(T arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int array[SIZE]{ 7, 2, 10, 4, 1, 8, 3, 9, 5, 6 };
//
//    cout << "array --> ";
//    ShowArray(array, SIZE);
//
//    SortArray(array, SIZE, false); 
//    cout << "Sorted from min :: ";
//    ShowArray(array, SIZE);
//
//    SortArray(array, SIZE, true); 
//    cout << "Sorted from max :: ";
//    ShowArray(array, SIZE);
//}


/*Написати функцію, яка сортує першу половину масиву за спаданням, а другу — за зростанням,
використовуючи сортування простими вставками.*/
//#define SIZE 10
//
//void InsertionSort(int arr[], int start, int end, bool descending) {
//    for (int i = start + 1; i < end; i++) {
//        int key = arr[i];
//        int j = i - 1;
//
//        if (descending) {
//            while (j >= start && arr[j] < key) {
//                arr[j + 1] = arr[j];
//                j--;
//            }
//        }
//        else {
//            while (j >= start && arr[j] > key) {
//                arr[j + 1] = arr[j];
//                j--;
//            }
//        }
//
//        arr[j + 1] = key;
//    }
//}
//
//void ShowArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//
//int main() {
//    int arr[SIZE] = { 7, 2, 10, 4, 1, 8, 3, 9, 5, 6 };
//
//    cout << "Array --> ";
//    ShowArray(arr, SIZE);
//    InsertionSort(arr, 0, SIZE / 2, true);
//    InsertionSort(arr, SIZE / 2, SIZE, false);
//    cout << "After sort :: ";
//    ShowArray(arr, SIZE);
//}


/*У функцію передається масив випадкових
чисел у діапазоні від -20 до +20. Необхідно знайти позиції крайніх від’ємних елементів (найлівішого від’ємного
елемента і найправішого від’ємного елемента) і впорядкувати елементи, що знаходяться між ними.*/
//#define SIZE 10
//void InsertionSort(int arr[], int start, int end) {
//    for (int i = start + 1; i < end; i++) {
//        int key = arr[i];
//        int j = i - 1;
//        while (j >= start && arr[j] > key) {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//        arr[j + 1] = key;
//    }
//}
//
//void ShowArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//
//int main() {
//    srand(time(0));
//
//    int arr[SIZE];
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = rand() % 41 - 20;
//    }
//
//    cout << "Array --> ";
//    ShowArray(arr, SIZE);
//
//    int left = -1, right = -1;
//
//    for (int i = 0; i < SIZE; i++) {
//        if (arr[i] < 0) {
//            if (left == -1) left = i;
//            right = i;
//        }
//    }
//
//    if (left == -1 || left == right) {
//        cout << "Not enough negative elements to sort!!! ";
//    }
//
//    cout << "Leftmost negative: position " << left << ", rightmost negative: position " << right << endl;
//
//    InsertionSort(arr, left + 1, right);
//
//    cout << "After sorting between negatives: ";
//    ShowArray(arr, SIZE);
//}


/*Написати рекурсивну функцію знаходження
степеня числа.*/
//double Power(double base, int exponent) {
//    if (exponent == 0)
//        return 1; 
//    if (exponent > 0)
//        return base * Power(base, exponent - 1);
//    else
//        return 1 / Power(base, -exponent);
//}
//
//int main() {
//    double base;
//    int exponent;
//
//    cout << "Enter number: ";
//    cin >> base;
//    cout << "Enter the exponent: ";
//    cin >> exponent;
//
//    cout << "result :: " << Power(base, exponent) << endl;
//}

/*Написати рекурсивну функцію, яка виводить
N зірок у ряд, число N задає користувач. Проілюструйте
роботу функції прикладом.*/
//void stars(int N, char S) {
//    if (N <= 0)
//        return;
//    cout << S;
//    stars(N - 1, S);
//}
//
//int main() {
//    int N;
//    char S;
//
//    cout << "Enter number: ";
//    cin >> N;
//    cout << "Enter symbol: ";
//    cin >> S;
//    stars(N, S);
//    cout << endl;
//}





/*Написати перевантажені функції і протестувати їх в основній програмі:
■ Знаходження максимального значення в одновимірному масиві;
■ Знаходження максимального значення у двовимірному масиві;
■ Знаходження максимального значення в тривимірному масиві;
■ Знаходження максимального значення двох цілих;
■ Знаходження максимального значення трьох цілих.*/

int maxValue(int a, int b) {
    return a > b ? a : b;
}

int maxValue(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int maxValue(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int maxValue(int arr[][3], int rows) {
    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    return max;
}

int maxValue(int arr[][3][3], int x) {
    int max = arr[0][0][0];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (arr[i][j][k] > max)
                    max = arr[i][j][k];
            }
        }
    }
    return max;
}
int main() {
    int arr1[5] = { 3, 8, 1, 9, 4 };

    int arr2[2][3] = {
        {5, 1, 9},
        {2, 8, 4}
    };

    int arr3[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        }
    };

    cout << "Max of two (5, 9): " << maxValue(5, 9) << endl;
    cout << "Max of three (5, 9, 2): " << maxValue(5, 9, 2) << endl;
    cout << "Max in 1 array: " << maxValue(arr1, 5) << endl;
    cout << "Max in 2 array: " << maxValue(arr2, 2) << endl;
    cout << "Max in 3 array: " << maxValue(arr3, 2) << endl;
}