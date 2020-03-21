//Sa se realizeze un program care realizeaza suma a doua
//numerelor intr - o metoda separate de metoda main, iar aceea
//metoda returneaza un pointer.
#include<stdio.h>
#include<stdlib.h>

void suma(int *m, int *n)
{
	int sum = 0;
	sum = *m + *n;
	printf("%d", sum);
}
int main()
{
	int a, b;
	printf("Scrieti primul numarul ");
	scanf("%d", &a);
	printf("Scrieti al doilea numar ");
	scanf("%d", &b);
	printf("Suma numerelor este: ");
	suma(&a, &b);
	system("pause");
	return 0;
}
