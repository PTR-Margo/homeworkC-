#include <iostream>
using namespace std;

// task 5
void SumArray(int* arr, int size)
{
	int result = 0;
	for (size_t i = 0; i < size; i++)
	{
		result += *(arr + i);
	}
	cout << "Sum " << result << endl;
}

void ShowArray(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";

	}cout << endl;
}
int main() {
	// task 1
	/*int a, b;
	cout << "Enter first number :: ";
	cin >> a;
	cout << "Enter second number :: ";
	cin >> b;

	int *pa = &a;
	int *pb = &b;
	
	if (*pa > *pb)
		cout << *pa;
	else
		cout << *pb;*/


	// task 2
	/*int a;
	cout << "Enter first number :: ";
	cin >> a;
	
	int* pa = &a;
	if (*pa > 0)
		cout << "+";
	else
		cout << "-";*/


	// task 3
	/*int a, b;
	cout << "Enter first number :: ";
	cin >> a;
	cout << "Enter second number :: ";
	cin >> b;

	int* pa = &a;
	int* pb = &b;

	int temp = *pa;
	*pa = *pb;
	*pb = temp;

	cout << "and now your first number is " << *pa << " and your second number is " << *pb;*/


	//task 3
	/*int a, b, work;
	cout << "Enter first number :: ";
	cin >> a;
	cout << "Enter second number :: ";
	cin >> b;
	cout << "What do you want? 1: +,  2: -,  3: *,  4: /   --> ";
	cin >> work;

	int* pa = &a;
	int* pb = &b;

	switch (work) {
	case 1:
		cout << *pa + *pb;
		break;
	case 2:
		cout << *pa - *pb;
		break;
	case 3:
		cout << *pa * *pb;
		break;
	case 4:
		cout << *pa / *pb;
		break;
	default:
		cout << "Error, try again";
		break;
	}*/


	//task 5
	const int SIZE = 10;
	int array[SIZE]{1,2,3,4,5,6,7,8,9,10};

	ShowArray(array, SIZE);
	SumArray(array, SIZE);
	   
}