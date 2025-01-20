#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n,a,i,j,suma=0;


int main() {

	/* Zadanie 1
	int tab[10];

	for (i = 0; i < 10; i++)
	{
		tab[i] = (i+1)*3;
		printf("%d ", tab[i]);

	}*/
	
	/* Zadanie 2
	
	int tab[10];

	for (i = 0; i < 10; i++)
	{
		tab[i] = (i + 1) * 3;
		
	}
	
	for (i = 1; i < 10; i += 2) { 
		printf("%d ", tab[i]);
	}*/

	
	
	/* Zadanie 3
	printf("Podaj rozmiar tablicy: ");
	scanf_s("%d",&n);
	printf("Podaj wartosc a: ");
	scanf_s("%d", &a);

	int* tab = (int*)malloc(n * sizeof(int));


	for (i = n - 1; i >= 0; i--) {

		tab[i] = a - (n - 1 - i)*5 ;

	}
	
	printf("Zawartosc tablicy:\n");

	for (i = 0; i < n; i++)
	{

		printf("%d\n", tab[i]);

	}*/

	/* Zadanie 4
	int* tab = (int*)malloc(n * sizeof(int));

	srand(time(NULL));

	printf("Podaj ilosc liczb do wylosowania: ");
	scanf_s("%d", &n);

	printf("Wylosowane wartosci tablicy:");
	
	for (i = 0; i < n; i++) {
		tab[i] = rand() % (50 - (-23) + 1) - 23;
		printf("%d ", tab[i]);

		

	}

	int min = tab[0];
	for (i = 1; i < n; i++) {
		if (tab[i] < min) {
			min = tab[i]; 
		}
	}

	printf("\nMinimalna wartosc w tablicy to: %d \n", min);*/

		
	/* Zadanie 5
	printf("Podaj rozmiar tablicy: ");
	scanf_s("%d", &n);

	int* tab = (int*)malloc(n * sizeof(int));

		
	printf("Podaj pierwsza wartosc tablicy: ");
	scanf_s("%d", &tab[0]);
	printf("Podaj druga wartosc tablicy: ");
	scanf_s("%d", &tab[1]);

		
	for (i = 2; i < n; i++) {
		tab[i] = tab[i - 1] + tab[i - 2];  
	}

		
	printf("Tablica: \n");
	for (i = 0; i < n; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");*/

	
// Zadanie 6
// int tab[20];
//
//for  (i = 0; i < 10; i++)
//
//{
//	tab[i] = i + 1;
//}
//
//for (i = 10; i <20 ; i++)
//{
//	tab[i] = tab[i - 10];
//}
//
//printf("Wynik: \n");
//
//for (i = 0; i < 20; i++)
//{
//
//	printf("%d\n",tab[i]);
//
//}

//printf("Podaj wymiar rozmiar macierzy n x n: ");
//scanf_s("%d",&n);
//
//
//
//int* macierz = (int*)malloc(n * sizeof(int));
//
//int macierz[n][n];
//
//
//for (i = 0; i < n; i++)
//{
//	for (j = 0; j < n; j++)
//	{
//		printf("macierz[%d][%d]: ", i, j);
//		scanf("%d", &macierz[i][j]);
//	}
//}

	/*for (i = 0; i < n; i++) {
		suma += macierz[i][i];
	}

	
	printf("Suma elementów przekatnej glownej: %d\n", suma);*/

	return 0;
}


	


