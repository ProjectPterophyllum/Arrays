#include <iostream>
#include <conio.h>
#define LEFT 75
#define RIGHT 77
#define DOWN 80
using namespace std;
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
void shiftarrayleft(int array[], int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		int tmp = array[0];
		for (int i = 0; i < N - 1; i++)
		{
			array[i] = array[i + 1];
		}
		array[N - 1] = tmp;
	}
}//Сдвиг массива влево
void shiftarrayright(int array[], int N, int NumElem)
{
	for (int j = 0; j < NumElem; j++)
	{
		int tmp = array[N - 1];
		for (int i = N - 2; i >= 0; i--)
		{
			array[i + 1] = array[i];
		}
		array[0] = tmp;
	}
}//Сдвиг массива вправо
void coutcellnumber(int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << i << " ";
	}
	cout << endl;
}//Просто для отображения номеров ячеек.
void main()
{
	setlocale(LC_ALL, "");
	const int N = 10;
	int NumElem = 1;
	int array[N] = {};
	fillarray(array, N);
	int key = 0;
	do
	{
		cout << "Нажатие клавиш \"Влево\" или \"Вправо\" двигает массив, \"Вниз\" - завершает работу\n";
		cout << "Номера ячеек:     "; coutcellnumber(N);
		cout << "Содержимое ячеек: "; coutarray(array, N);
		switch (key = _getch())
		{
		case LEFT:
			system("CLS");
			shiftarrayleft(array, N, NumElem);
			break;
		case RIGHT:
			system("CLS");
			shiftarrayright(array, N, NumElem);
			break;
		case DOWN:
			key = 0;
			break;
		}
		system("CLS");
	} while (key);
}