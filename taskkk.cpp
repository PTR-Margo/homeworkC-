#include <iostream>
#include <cmath>
using namespace std;

//task1
//bool isLeapYear(int year) {
//    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
//}
//
//int countDays(int day, int month, int year) {
//    int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    int totalDays = day;
//    for (int i = 0; i < month - 1; i++)
//        totalDays += daysInMonth[i];
//    if (month > 2 && isLeapYear(year))
//        totalDays++;
//    for (int y = 1; y < year; y++)
//        totalDays += isLeapYear(y) ? 366 : 365;
//    return totalDays;
//}
//
//int differenceBetweenDates(int d1, int m1, int y1, int d2, int m2, int y2) {
//    int total1 = countDays(d1, m1, y1);
//    int total2 = countDays(d2, m2, y2);
//    return abs(total2 - total1);
//}


//task2
//double average(double arr[], int size) {
//    double sum = 0;
//    for (int i = 0; i < size; i++)
//        sum += arr[i];
//    return sum / size;
//}


//task3
//void countElements(double arr[], int size, int& positives, int& negatives, int& zeros) {
//    positives = negatives = zeros = 0;
//    for (int i = 0; i < size; i++) {
//        if (arr[i] > 0) positives++;
//        else if (arr[i] < 0) negatives++;
//        else zeros++;
//    }
//}

int main() {
    // Task 1
    /*int d1, m1, y1, d2, m2, y2;
    cout << "Enter first date (day month year): ";
    cin >> d1 >> m1 >> y1;
    cout << "Enter second date (day month year): ";
    cin >> d2 >> m2 >> y2;

    cout << "Difference between dates: "
        << differenceBetweenDates(d1, m1, y1, d2, m2, y2)
        << " days  ";*/

    // Task 2
    /*const int SIZE = 5;
    double numbers[SIZE];
    cout << "Enter " << SIZE << " array elements:  ";
    for (int i = 0; i < SIZE; i++)
        cin >> numbers[i];

    cout << "Average: " << average(numbers, SIZE) << endl;*/

    // Task 3
   /* int p, n, z;
    countElements(numbers, SIZE, p, n, z);
    cout << "Positive: " << p << ", Negative: " << n << ", Zero: " << z << endl;*/
}
