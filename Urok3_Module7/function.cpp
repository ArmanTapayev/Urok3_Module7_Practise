
#include <stdio.h>
#include <locale.h>
#include<time.h>
#include<iostream>
#include"Header.h"

int *maxNumber(int *x, int *y) // возвращает указатель
{
	/*int x = 5;
	return &x;*/ // вернет адрес

	if (*x > *y)
		return x;
	else
		return y;
}

char signNumber(int *x)
{
	if (x > 0)
		return '+';
	else
		return '-';
}

void fillArray(int (*arr)[4], int row)
{
	for (int i = 0; i < row ; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			*(*(arr + i)+j) = 10 + rand() % 50;
		}
	}

}

void printArray(int(*arr)[4], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%3d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
	
}