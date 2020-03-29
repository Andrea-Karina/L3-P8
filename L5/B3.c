//3. Se citesc de la tastatura tastatura &quot;N&quot; numere intregi. Sa
//se verifice folosind DOAR stive daca numerele respective
//sunt palindroame, iar numere care sunt palindroame vor fi
//introduce intr - o stiva.La sfarsit se va afisa continutul stivei
//respective.Cerinta de implementare : Se va implementa o
//singura metoda de Push /Pop / Peek , se va stii pe care
//stiva se lucreaza transmitand parametrii prin referinta.
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int stiva1[100], stiva2[100], vf1= -1, vf2 = -1;

void push(int n, int *vf1, int stiva1[])
{
	stiva1[++(*vf1)] = n;
}
void pop(int *vf1, int stiva1[])
{
	if (*vf1 != -1)
		(*vf1)--;
	else
		printf("Stiva este goala!\n");
}
int peek(int *vf1, int stiva1[])
{
	return stiva1[*vf1];
}
int main()
{
	int i, nr1, nr2 = 0, n, aux, k;
	printf("Numarul total de elemente: ");
	scanf("%d", &nr1);
	for (i = 0; i < nr1; i++)
	{
		printf("Elementul %d este:", i + 1);
		scanf("%d", &n);
		aux = n;
		vf1 = -1;
		k = 1;
		while (aux)
		{
			push(aux % 10, &vf1, stiva1);
			aux = aux / 10;
		}
		aux = n;
		while (aux)
		{
			if (aux % 10 != peek(&vf1, stiva1))
				k = 0;
			aux = aux / 10;
			vf1--;
		}
		if (k == 1)
		{
			printf("Numarul este palindorm\n");
			push(n, &vf2, stiva2);
			nr2 = nr2 + 1;
		}
		else
			printf("Numarul nu este palindorm\n");

	}
	printf("Stiva:\n");
	for (i = 0; i < nr1; i++)
		printf("Elementul %d este: %d\n", i + 1, stiva2[i]);

	system("pause");
	return 0;
}