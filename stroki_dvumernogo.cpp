#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int m, n; 
	cout << "list size ";
	cin >> m >> n;
	int** list = new int*[m];
	for (int i = 0; i < m; i++)
	{
		list[i] = new int[n];
	} 

	// заполнение
	cout << "fill in the list ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> list[i][j];
		}
	} 
	// выведу массив
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << list[i][j] << "\t";
		}
		cout << endl;
	}
	// поиск строки с минимальным элементом
	int minstroka = 0;
	int min = list[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (list[i][j] < min) 
			{
				min = list[i][j];
				minstroka = i;
			}
		}
	} 
	// копирую 1ю строку в отдельный массив
	int* first_str=new int[n];
	for (int i = 0; i < n; i++) 
	{
		first_str[i] = list[0][i];
	}
	// меняю указатель на 1ю строку на указатель на строку с минимальным элементом
	list[0]=list[minstroka] ;
	// меняю указатель на строку с минимальным элементом на указатель на 1ю строку 
		list[minstroka] = first_str;
	// выведу массив
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << list[i][j] << "\t";
		}
		cout << endl;
	}
	// поудаляю строки и массивы
	for (int i = 0; i < m; i++)
	{
		delete[] list[i];
	}
	delete[] list;
	delete[] first_str;
	_getch();
	return 0;
}