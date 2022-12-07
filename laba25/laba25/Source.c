#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int rand10(int mmax);
double rand_double(double dmin, double dmax);
int* randmassiv(int n, int mmax);
double* randlfmassiv(int n, double dm);
void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int m = 1 + rand() % 10;
	int k;
	printf("������� �����: ");
	scanf_s("%d", &k);
	if (k == m)
	{
		printf("�� ������� �����. �� �������: %d. ���������� �����: %d", k, m);
	}
	else
	{
		printf("�� �� ������� �����. �� �������: %d. ���������� �����: %d", k, m);
	}
	int A = 1, B = 4, j;
	int q = A + rand() % (B - A);
	printf("\n�������� ������� - 1-������, 2-�������, 3-������ - ");
	scanf("%d",&j);
	if (j == q)
	{
		printf("�����. ������� ���������� ��������.");
	}
	else if (j == 1 && q == 2)
	{
		printf("�� ��������. ��������� ������ �������.");
	}
	else if (j == 1 && q == 3)
	{
		printf("�� ���������. ��������� ������ ������.");
	}
	else if (j == 2 && q == 3)
	{
		printf("�� ��������. ��������� ������ ������.");
	}
	else if (j == 3 && q == 1)
	{
		printf("�� ��������. ��������� ������ ������.");
	}
	else if (j == 2 && q == 1)
	{
		printf("�� ���������. ��������� ������ ������.");
	}
	int mmax;
	printf("\n������� ������������ ����� � �������: ");
	scanf("%d", &mmax);
	printf("\n��������� ����� �����: %d", rand10(mmax));
	double dmin, dmax;
	printf("\n������� �������� �� ������������ �����: ");
	scanf("%lf%lf", &dmin, &dmax);
	printf("\n��������� ������������ �����: %lf", rand_double(dmin,dmax));
	int size;
	double dm;
	printf("\n������� ������ ��� ���������� �������: ");
	scanf("%d", &size);
	randmassiv(size, mmax);
	printf("\n������� ������ ��� ���������� �������: ");
	scanf("%d", &size);
	printf("\n������� ����������� ������������ ����� � �������: ");
	scanf("%lf",&dm);
	randlfmassiv(size,dm);
}
int rand10(int mmax)
{
	int A = 1;
	int ch = A + rand() % (mmax - A);
	return ch;
}
double rand_double(double dmin, double dmax)
{
	double ch = dmin + 1. * (dmax - dmin) * rand() / RAND_MAX;
	return ch;
}
int* randmassiv(int n, int mmax)
{
	int A[100];
	for (int i = 0; i < n; i++)
	{
		A[i] = 1 + rand() % (mmax - 1);
	}
	for (int i = 0; i < n; i++)
	{
		printf("\nA[%d] = %d", i, A[i]);
	}
	return 0;
}
double* randlfmassiv(int n, double dm)
{
	double A[100];
	for (int i = 0; i < n; i++)
	{
		A[i] = (-1*dm) + 1.f * (dm-(-1*dm))*rand()/ RAND_MAX;
	}
	for (int i = 0; i < n; i++)
	{
		printf("\nA[%d] = %lf", i, A[i]);
	}
	return 0;
}