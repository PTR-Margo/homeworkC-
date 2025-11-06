#include <iostream>
using namespace std;
/*Написати функцію, що реалізує алгоритм
лінійного пошуку заданого ключа в одновимірному масиві.*/
//int linearSearch(int arr[], int size, int key) {
//    for (int i = 0; i < size; i++)
//        if (arr[i] == key)
//            return i;
//    return -1; 
//}
//
//int main() {
//    int arr[] = { 4, 7, 1, 9, 3 };
//    int size = 5, key;
//    cout << "Enter key: ";
//    cin >> key;
//
//    int index = linearSearch(arr, size, key);
//    if (index != -1) cout << "Found at index " << index;
//    else cout << "Not found";
//}

/*Написати функцію, що реалізує алгоритм
бінарного пошуку заданого ключа в одновимірному масиві.*/
int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = { 1, 3, 5, 7, 9 };
    int size = 5, key;
    cout << "Enter key: ";
    cin >> key;

    int index = binarySearch(arr, size, key);
    if (index != -1) cout << "Found at index " << index;
    else cout << "Not found";
}