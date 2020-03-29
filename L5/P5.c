//5. Sa se introduca �ntr - o stiva toate numerele naturale p�na la
//50. Din prima stiva se vor elimina numerele prime si se vor
//adauga �ntr - o a doua stiva sub forma binara.
//A) Sa se adauge �n stiva toate numerele naturale p�na la 50.
//B) Sa se scoata din prima stiva numerele prime.
//C) Transformarea numerelor prime �n baza 2. (sub forma
//finala)
//D) Sa se populeze a doua stiva cu forma binara.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define MAXSIZE 100

int stiva1[MAXSIZE], stiva2[MAXSIZE];
int vf1 = -1, vf2 = -1;

void push1(int n)
{

	if (vf1 == MAXSIZE - 1)
		printf("Nu se mai pot introduce elemente in stiva!\n");

	else
	{

		stiva1[++vf1] = n;
	}
}
void push2(int n)
{	

	if (vf2 == MAXSIZE - 1)
		printf("Nu se mai pot introduce elemente in stiva!\n");
	else
	{
		stiva2[++vf2] = n;
	}
}
int prim(int n)
{
	int d = 2;
	if (n == 1)
		return 0;
	for (d = 2; d <= n / 2; d++)
	{
		if (n%d == 0)
			return 0;
	}
	return 1;
}
int binar(int n)
{
	int b = 0, p = 1;
	while (n)
	{
		b += (n % 2)*p;
		p *= 10;
		n /= 2;
	}
	return b;
}
void afiseaza_stiva1()
{
	int i;
	for (i = 0; i <= vf1; i++)
	{
		printf("%d\n ", stiva1[i]);
	}
}

void afiseaza_stiva2()
{
	int i;
	for (i = 0; i <= vf2; i++)
	{
		printf("%d\n ", stiva2[i]);
	}
}
void eliminare()
{
	int i, j;
	for (i = 0; i <= vf1; i++)
	{
		if (prim(stiva1[i]))
		{
			for (j = i; j < vf1; j++)
			{
				stiva1[j] = stiva1[j + 1];
			}
			--vf1;
			--i;
		}
	}
}
int main()
{
	int i;
	for (i = 0; i <= 50; i++)
	{
		push1(i);
		if (prim(i))
		{
			push2(binar(i));
		}
	}
	eliminare();
	afiseaza_stiva1();
	printf("\n");
	afiseaza_stiva2();

	system("pause");
	return 0;
}

