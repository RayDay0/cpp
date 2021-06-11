﻿#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void push_back(int*& arr, int& size,const int value)
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[size++] = value; 
	delete[]arr;
	arr = newArray;
}

void pop_back(int*& arr, int& size)
{
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
		delete[] arr;
		arr = newArray;
}

int main()
{
	srand(time(NULL));
	int size = 5;
	int* arr = new int[size];

	FillArray(arr, size);
	ShowArray(arr, size);

	push_back(arr, size, 11);
	ShowArray(arr, size);

	pop_back(arr, size);
	ShowArray(arr, size);

	delete[]arr;
}


