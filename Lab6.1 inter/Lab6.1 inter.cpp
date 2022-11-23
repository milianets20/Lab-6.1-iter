#include <iostream>
#include <iomanip>
#include <time.h>
#include <windows.h>

using namespace std;

void Create(int* x, const int SIZE, const int LOW, const int HIGH);
void Print(int* x, const int SIZE);
int Sum(int* x, const int SIZE);
int Count(int* x, const int SIZE);
void Replace(int* x, const int SIZE);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));

	const int SIZE = 24;
	int x[SIZE];
	int count = 0;
	const int LOW = -17;
	const int HIGH = 53;

	Create(x, SIZE, LOW, HIGH);
	cout << "x[24] = { ";
	Print(x, SIZE);
	cout << " }" << endl;
	cout << "N : "
		<< Sum(x, SIZE) << endl;
	cout << "S: "
		<< Count(x, SIZE) << endl;
	cout << " " << endl;
	cout << "x[24] = { ";
	Replace(x, SIZE);
	cout << " }" << endl;

	return 0;
}
void Create(int* x, const int SIZE, const int LOW, const int HIGH)
{
	for (int i = 0; i < SIZE; i++)
		x[i] = LOW + rand() % (HIGH - LOW + 1);
}
void Print(int* x, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		cout << x[i] << " ";
}
int Sum(int* x, const int SIZE)
{
	int Suma = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (x[i] < 0 && x[i] % 3 != 0)
			Suma += x[i];
	}
	return Suma;
}
int Count(int* x, const int SIZE)
{
	int count = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (x[i] < 0 && x[i] % 3 != 0)
			count++;
	}
	return count;
}
void Replace(int* x, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (x[i] < 0 && x[i] % 3 != 0)
		{
			x[i] = 0;
		}
		cout << x[i] << " ";
	}
}
