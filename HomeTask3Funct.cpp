#include <iostream>
using namespace std;

//double power(double base, int exponent) {
//    /*Написати функцію, яка приймає два параметри: основа степеня і показник степеня, та обчислює
//степінь числа на основі отриманих даних*/
//    double result = 1;
//    if (exponent > 0) {
//        for (int i = 0; i < exponent; i++) {
//            result *= base;
//        }
//    }
//    else if (exponent < 0) {
//        for (int i = 0; i < -exponent; i++) {
//            result *= base;
//        }
//        result = 1 / result;
//    }
//    else {
//        result = 1;
//    }
//    return result;
//}
//
//int main() {
//    double base;
//    int exponent;
//
//    cout << "Enter the base of the power --> ";
//    cin >> base;
//    cout << "Enter the exponent --> ";
//    cin >> exponent;
//
//    cout << "Result :: " << power(base, exponent);
//}

/*Написати функцію, яка отримує в якості
параметрів 2 цілих числа та повертає суму чисел із діапазону між ними.

 Не дужe зрозумiла як дістатися до чисел*/


//bool isLucky(int number) {
//    /*Написати функцію, що визначає, чи є «щасливим» шестизначне число.*/
//    if (number < 100000 || number > 999999) {
//        cout << "Error" << endl;
//        return false;
//    }
//
//    int d1 = number / 100000;
//    int d2 = (number / 10000) % 10;
//    int d3 = (number / 1000) % 10;
//    int d4 = (number / 100) % 10;
//    int d5 = (number / 10) % 10;
//    int d6 = number % 10;
//
//    int sum1 = d1 + d2 + d3;
//    int sum2 = d4 + d5 + d6;
//
//    return sum1 == sum2;
//}
//
//int main() {
//    int num;
//    cout << "Enter 6 numbers in line (123456) --> ";
//    cin >> num;
//
//    if (isLucky(num))
//        cout << "It is Happy number!!" << endl;
//    else
//        cout << "It isn't Happy number((" << endl;
//}