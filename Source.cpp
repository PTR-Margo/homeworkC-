#include <iostream>
#include <ctime>
using namespace std;


int main()
{

	/*В одновимірному масиві, заповненому випадковими числами,
	визначити мінімальний і максимальний елементи.*/
	/*srand(time(0));
	int const SIZE = 6;
	int arr[SIZE];

	for (size_t i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 + 1;
	}

	cout << "Array :: ";

	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;

	int minEl = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] < minEl) {
			minEl = arr[i];
		}
	}
	cout << "Min element is --> " << minEl << endl;

	int maxEl = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] > maxEl) {
			maxEl = arr[i];
		}
	}
	cout << "Max element is --> " << maxEl << endl;*/

	/*Користувач вводить прибуток фірми за рік (12 місяців). Потім користувач вводить діапазон (наприклад, 3 і 6 — пошук між 3-м і 6-м місяцем). Необхідно визначити місяць, у якому прибуток був максимальним, і місяць, у якому прибуток був мінімальним, з урахуванням обраного діапазону.*/
    /*const int MONTH = 12;
    int year[MONTH];

    for (size_t i = 0; i < MONTH; i++) {
        cout << "Enter salary of " << (i + 1) << " month: ";
        cin >> year[i];
    }

    cout << "Salaries for each month:" << endl;
    for (size_t i = 0; i < MONTH; i++) {
        cout << "Month " << (i + 1) << ": " << year[i] << endl;
    }

    cout << "Enter range from 1 to 12 ::" << endl;

    int rangeSt;
    cout << "Start of range --> ";
    cin >> rangeSt;

    for (size_t i = 0; true; i++) {
        if (rangeSt < 1 || rangeSt > 12) {
            cout << "Range must start from 1 to 12!! --> ";
            cin >> rangeSt;
        }
        else {
            break;
        }
    }

    cout << endl;
    int rangeEnd;
    cout << "End of range --> ";
    cin >> rangeEnd;

    for (size_t i = 0; true; i++) {
        if (rangeEnd < 1 || rangeEnd > 12) {
            cout << "Range must end from 1 to 12!! --> ";
            cin >> rangeEnd;
        }
        else {
            break;
        }
    }

    if (rangeSt > rangeEnd) {
        int temp = rangeSt;
        rangeSt = rangeEnd;
        rangeEnd = temp;
    }

    int maxSal = year[rangeSt - 1];
    int minSal = year[rangeSt - 1];

    for (int i = rangeSt; i < rangeEnd; i++) {
        if (year[i] > maxSal) maxSal = year[i];
        if (year[i] < minSal) minSal = year[i];
    }
    cout << endl;
    cout << "Between months " << rangeSt << " and " << rangeEnd << ":" << endl;
    cout << "Min salary was --> " << minSal << endl;
    cout << "Max salary was --> " << maxSal << endl;*/

    /*В одновимірному масиві, що складається з N дійсних чисел обчислити:
    Суму від'ємних елементів.
    Добуток елементів, що знаходяться між min і max елементами.
    Добуток елементів з парними номерами.
    Суму елементів, що знаходяться між першим і останнім від'ємними елементами.*/
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    double arr[1000];
    cout << "Enter " << N << " real numbers:\n";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    double sumNegative = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] < 0)
            sumNegative += arr[i];
    }

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < N; ++i) {
        if (arr[i] < arr[minIndex]) minIndex = i;
        if (arr[i] > arr[maxIndex]) maxIndex = i;
    }

    int start = minIndex < maxIndex ? minIndex : maxIndex;
    int end = minIndex > maxIndex ? minIndex : maxIndex;

    double productBetween = 1;
    if (end - start > 1) {
        for (int i = start + 1; i < end; ++i)
            productBetween *= arr[i];
    }
    else {
        productBetween = 0;
    }

    double productEvenIndices = 1;
    for (int i = 0; i < N; i += 2) {
        productEvenIndices *= arr[i];
    }

    int firstNeg = -1, lastNeg = -1;
    for (int i = 0; i < N; ++i) {
        if (arr[i] < 0) {
            firstNeg = i;
            break;
        }
    }
    for (int i = N - 1; i >= 0; --i) {
        if (arr[i] < 0) {
            lastNeg = i;
            break;
        }
    }

    double sumBetweenNeg = 0;
    if (firstNeg != -1 && lastNeg != -1 && lastNeg - firstNeg > 1) {
        for (int i = firstNeg + 1; i < lastNeg; ++i)
            sumBetweenNeg += arr[i];
    }

    cout << "Sum of negative elements: " << sumNegative << "\n";
    cout << "Product of elements between min and max: " << productBetween << "\n";
    cout << "Product of elements with even indices: " << productEvenIndices << "\n";
    cout << "Sum of elements between first and last negative elements: " << sumBetweenNeg << "\n";

}
