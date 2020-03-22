//Sa se scrie un program care calculeaza suma elementelor unui
//vector folosindu - ne doar de variabile de tip pointer.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int v[10],i, suma;
	printf("Citim valorile vectorului: \n");
	for (i = 0; i <10; i++)
	{
		printf("v[%d] = ", i + 1); 
		scanf("%d", v + i);
	}
	suma = 0;
	for (i = 0; i <10 ; i++)
		suma += *(v + i);
	printf("Suma elementelor vectorului este %d\n", suma);
	system("PAUSE"); 
	return 0;
}