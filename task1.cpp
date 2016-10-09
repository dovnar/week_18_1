#include <iostream>
using namespace std;

void enterInArray(char** base, int countLine, int size);
void sortArray(char** base, int countLine);
void printArray(char ** base, int countLine);

void main()
{
	int size = 50;
	int countLine = 5;

	char** base = new char*[countLine];
	for (int i = 0; i < countLine; i++)
	{
		base[i] = new char[size];
	}

	enterInArray(base, countLine, size);
	cout << "before sorting: " << endl;
	printArray(base, countLine);
	sortArray(base, countLine);
	cout << "after sorting: " << endl;
	printArray(base, countLine);

	for (int i = 0; i < countLine; i++)
	{
		delete[] base[i];
	}
	delete[] base;
}

void enterInArray(char** base, int countLine, int size)
{
	for (int i = 0; i < countLine; i++)
	{
		cout << "enter name " << i + 1 <<" student: ";
		cin.getline(base[i], size);
	}
	
}

void sortArray(char** base, int countLine)
{
	for (int i = 0; i < countLine - 1; i++)
	{
		for (int j = 0; j < countLine - 1 - i; j++)
		{
			int result = strcmp(base[j], base[j + 1]);
			if (result > 0)
			{
				char* temp = base[j];
				base[j] = base[j + 1];
				base[j + 1] = temp;
			}
		}
	}
	
}

void printArray(char** base, int countLine)
{
	for (int i = 0; i < countLine; i++)
	{
		cout << base[i] << endl;
	}
}




/*Написать программу, которая дает пользователю ввести 5 фамилий студентов, а затем сортирует их по возрастанию.*/