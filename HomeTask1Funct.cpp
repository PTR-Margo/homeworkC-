#include <iostream>

using namespace std;

//void rectangle(int N, int K) {
//    /*Написати функцію, що виводить на екран
//прямокутник з висотою N і шириною K.*/
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < K; j++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}

//int factorial(int a) {
//    /*Написати функцію, яка обчислює факторіал
//переданого їй числа.*/
//    int res = 1;
//    for (int i = 1; i <= a; i++)
//    {
//        res *= i;
//    }
//    return res;
//}

//bool isPrime(int n) {
// /*Написати функцію, яка перевіряє, чи є передане їй число простим. Число називається простим, якщо воно ділиться без залишку тільки на себе та на одиницю*/
//    if (n <= 1)
//        return false;
//    for (int i = 2; i <= n / 2; i++) {
//        if (n % i == 0)
//            return false;
//    }
//
//    return true;
//}

//int cube(int num) {
//    /*Написати функцію, яка повертає куб числа.*/
//    return num * num * num;
//}

//int MaxNum(int a, int b) {
//    /*Написати функцію для знаходження найбільшого з двох чисел.*/
//    return a > b ? a : b;
//}

bool number(int num) {
    /*Написати функцію, яка повертає істину, якщо
    передане значення додатне, та брехню, якщо від’ємне.*/
    if (num > 0) 
        return true;
    else if (num < 0) 
        return false;
}

int main() {
    /*int N, K;
    cout << "Enter height --> ";
    cin >> N;
    cout << "Enter width --> ";
    cin >> K;
    rectangle(N, K);*/

    /*int a;
    cout << "Enter number --> ";
    cin >> a;

    cout << "Factorial " << a << " = " << factorial(a);*/

    /*int n;
    cout << "Enter number --> ";
    cin >> n;
    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;*/

    /*int num;
    cout << "Enter number --> ";
    cin >> num;
    cout << "Cube of " << num << " is " << cube(num);*/

    /*int a, b;
    cout << "enter first number --> ";
    cin >> a;
    cout << "enter second number --> ";
    cin >> b;
    cout << "Max number is " << MaxNum(a, b);*/

    int num;
    cout << "Enter number --> ";
    cin >> num;

    if (number(num))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}