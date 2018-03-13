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
		printf("������� ����� �������: ");
		scanf("%d", &n);

		switch (n)
		{
			case 1:
			{
				/*1. ��������� ��������� � �������� �������������, ���������� ���������� �� ���� �����.*/

				int a, b, *max;

				printf("������� 2 �����: ");
				scanf("%d,  %d", &a, &b);

				max = maxNumber(&a, &b);

				printf("max = %d\n", *max);

				system("pause");
			}
			break;

			case 2:
			{
				/*2. ��������� ��������� � �������� �������������, ���������� ���� �����, ��������� � ����������.*/
				int x;
				char y;
				printf("������� �����: ");
				scanf("%d", &x);

				y = signNumber(&x);
				printf("���� ����� %c: \n", &y);
			}
			break;

			case 3:
			{
				/*5. ��������� ���������� �� ������ ����� �����, ��������� ����� ��������� �������. 
				������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.
				a)	����� ���� ��������� �������
				b)	������� �������������� ���� ��������� �������
				c)	����������� �������
				d)	������������ ������� */
				int x[2][4], row=2, col=4;

				fillArray(x, row);

				printArray(x, row);


			}
			break;

			default:
				printf("��� ������ �������\n");
				break;
			}

		printf("����������? 1-�� 2 - ���: ");
		scanf("%d", &exit);

	} while (exit == 1);
}
