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
}//Заполнение массива с помощью ввода с клавиатуры
void fillarray(int array[], int N)
{
	for (int i = 0; i < N; i++)
		array[i] = i;
}//Заполнение массива числами от 0 до N
void coutarray(int array[], int N)
{
	for (int i = 0; i < N; i++)
		cout << array[i] << " ";
	cout << endl;
} //Вывод массива в прямом последовательности
void coutarrayrev(int array[], int N)
{
	for (int i = N - 1; i >= 0; i--)
	{
		cout << array[i] << " ";
	}
} //Вывод массива в обратном последовательности
int randomize(int start, int end)
{
	int random = 0;
	random = start + rand() % (end - start + 1);
	return random;
} //Случайное значение переменной в диапазоне от и до
void randomfillarray(int start, int end, int array[], int N)
{
	for (int i = 0; i < N; i++)
		array[i] = randomize(start, end);
} //Заполнение массива случайными числами
float summelementsofarray(int array[], int N)
{
	float sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += array[i];
	}
	return sum;
} //Сумма элементов массива
float middleariphmetical(int array[], int N)
{
	float Mar = 0;
	return Mar = summelementsofarray(array, N) / N;
} //Среднее арифметическое массива
int minimum(int array[], int N)
{
	int min = array[0];
	for (int i = 0; i < N; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}//Минимальное значение массива
int maximum(int array[], int N)
{
	int max = array[0];
	for (int i = 0; i < N; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}//Максимальное значение массива
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
	cout << summelementsofarray(array, N) << endl;
	cout << middleariphmetical(array, N) << endl;
	cout << "Minimum: " << minimum(array, N) << endl;
	cout << "Maximum: " << maximum(array, N) << endl;
	/*coutarray(array, N);
	enterarraywithkeyboard(array, N);
	coutarrayrev(array, N);*/
}