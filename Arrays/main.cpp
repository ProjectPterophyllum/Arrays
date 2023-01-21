//Arrays
#include <iostream>
using namespace std;
void enterarraywithkeyboard(int array[], int N)
{
	cout << "Вводите значения массива с клавиатуры через пробел: " << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> array[i];
	}
}
void fillarray(int array[], int N)
{
	for (int i = 0; i < N; i++)
		array[i] = i;
}
void coutarray(int array[], int N)
{
	for (int i = 0; i < N; i++)
		cout << array[i] << " ";
	cout << endl;
}
void coutarrayrev(int array[], int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
}
int randomize(int start, int end)
{
	int random = 0;
	random = start + rand() % (end - start + 1);
	return random;
}
void randomfillarray(int start, int end, int array[], int N)
{
	for (int i = 0; i < N; i++)
		array[i] = randomize(start, end);
}
int summelementsofarray(int array[], int N)
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += array[i];
	}
	return sum;
}
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	const int N = 10;
	int array[N] = { 3,5,8 };
	/*coutarray(array, N);
	fillarray(array, N);
	coutarray(array, N);
	array[9] = 1024;
	coutarray(array, N);*/
	randomfillarray(0, 15, array, N);
	coutarray(array, N);
	cout << summelementsofarray(array, N);
	/*coutarray(array, N);
	enterarraywithkeyboard(array, N);
	coutarrayrev(array, N);*/
}