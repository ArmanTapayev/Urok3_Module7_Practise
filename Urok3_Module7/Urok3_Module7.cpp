/*https://github.com/medvedev1990/Ukazateli */
#include <stdio.h>
#include <locale.h>
#include<time.h>
#include<iostream>
#include"Header.h"

int *maxNumber(int *x, int *y);
char signNumber(int *x);
void fillArray(int(*arr)[4], int row);
void printArray(int(*arr)[4], int row);

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int n, exit;

	do
	{
		printf("Введите номер задания: ");
		scanf("%d", &n);

		switch (n)
		{
			case 1:
			{
				/*1. Используя указатели и оператор разыменования, определить наибольшее из двух чисел.*/

				int a, b, *max;

				printf("Введите 2 числа: ");
				scanf("%d,  %d", &a, &b);

				max = maxNumber(&a, &b);

				printf("max = %d\n", *max);

				system("pause");
			}
			break;

			case 2:
			{
				/*2. Используя указатели и оператор разыменования, определить знак числа, введённого с клавиатуры.*/
				int x;
				char y;
				printf("Введите число: ");
				scanf("%d", &x);

				y = signNumber(&x);
				printf("Знак числа %c: \n", &y);
			}
			break;

			case 3:
			{
				/*5. Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива. 
				Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
				a)	сумму всех элементов массива
				b)	среднее арифметическое всех элементов массива
				c)	минимальный элемент
				d)	максимальный элемент */
				int x[2][4], row=2, col=4;

				fillArray(x, row);

				printArray(x, row);


			}
			break;

			default:
				printf("Нет такого задания\n");
				break;
			}

		printf("продолжить? 1-Да 2 - Нет: ");
		scanf("%d", &exit);

	} while (exit == 1);
}
