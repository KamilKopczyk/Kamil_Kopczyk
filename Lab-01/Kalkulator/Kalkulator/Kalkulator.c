#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define M_PI 3.14159265358979323846
int choise;
int a, b;
float c;
double d, e;


int main() {

	printf("======================Kalkulator====================== \n");
	printf("1. Dodawanie \n");
	printf("2. Odejmowanie \n");
	printf("3. Mnozenie \n");
	printf("4. Dzielenie \n");
	printf("5. Wyznaczenie pierwiastka kwadratowego  \n");
	printf("6. Podniesienie liczby do potegi  \n");
	printf("7. Wyznaczeni wartosci bezwzglednej  \n");
	printf("8. Wyznaczenie wartosci funkcji trygonometrycznych   \n");
	printf("9. Wyjscie \n");
	printf("====================================================== \n");

	printf("Wybierz jakie dzialanie chcesz robic: \n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	
	case 1:

		printf("Podaj 1 liczbe: \n");
		scanf_s("%d", &a);
		printf("Podaj 2 liczbe: \n");
		scanf_s("%d", &b);

		printf("Wynik dodawania: %d + %d = %d  \n", a,b, a+b);

		break;

	case 2:

		printf("Podaj 1 liczbe: \n");
		scanf_s("%d", &a);
		printf("Podaj 2 liczbe: \n");
		scanf_s("%d", &b);

		printf("Wynik odejmowania: %d - %d = %d  \n", a, b, a - b);

		break;

	case 3:

		printf("Podaj 1 liczbe: \n");
		scanf_s("%d", &a);
		printf("Podaj 2 liczbe: \n");
		scanf_s("%d", &b);

		printf("Wynik mnozenia: %d * %d = %d  \n", a, b, a * b);

		break;

	case 4:

		printf("Podaj 1 liczbe: \n");
		scanf_s("%d", &a);
		printf("Podaj 2 liczbe: \n");
		scanf_s("%d", &b);

		printf("Wynik dzielenia: %d / %d = %d  \n", a, b, a / b);

		break;

	case 5:

		printf("Podaj 1 liczbe: \n");
		scanf_s("%f", &c);
		
		printf("Pierwiastek kwadratowy z : %f = %f  \n", c,  sqrt(c));


		break;

	case 6:

		printf("Podaj 1 liczbe: \n");
		scanf_s("%d", &a);
		printf("Podaj 2 liczbe: \n");
		scanf_s("%d", &b);

		printf("Wynik potegowania %d^%d = %f \n", a,b, pow(a,b));

		break;

	case 7:

		printf("Podaj 1 liczbe: \n");
		scanf_s("%d", &a);
		
		printf("Wynik wartosci bewzglednej: %d = %d  \n", a, abs(a) );

		break;

	case 8:

		printf("Podaj 1 liczbe: \n");
		
		

		

		break;

	case 9:

		printf("Wychodzisz z kalkulatora \n");

		break;

	default:

		printf("Nie dziala");

		break;
	}

	return 0;

}