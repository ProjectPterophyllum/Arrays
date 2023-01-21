//Arrays
#include <iostream>
using namespace std;
void enterarraywithkeyboard(int array[], int N)
{
	cout << "¬водите значени€ массива с клавиатуры: " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "«начение массива " << i + 1 << ": ";
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
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	const int N = 10;
	int array[N] = { 3,5,8 };
	coutarray(array, N);
	fillarray(array, N);
	coutarray(array, N);
	array[9] = 1024;
	coutarray(array, N);
	randomfillarray(0, 15, array, N);
	coutarray(array, N);
	enterarraywithkeyboard(array, N);
	coutarray(array, N);
}