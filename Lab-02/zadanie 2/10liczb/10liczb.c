#include <stdlib.h>
#include <stdio.h>


int main() {
    int liczba;
    int suma_dodatnich = 0, suma_ujemnych = 0;
    int ilosc_dodatnich = 0, ilosc_ujemnych = 0;

    printf("Wprowadz 10 liczb:\n");
    for (int i = 0; i < 10; i++) {
        printf("Liczba %d: ", i + 1);
        scanf_s("%d", &liczba);

        if (liczba > 0) {
            suma_dodatnich += liczba;
            ilosc_dodatnich++;
        }
        else if (liczba < 0) {
            suma_ujemnych += liczba;
            ilosc_ujemnych++;
        }
    }

    printf("Ilosc liczb dodatnich: %d\n", ilosc_dodatnich);
    printf("Suma liczb dodatnich: %d\n", suma_dodatnich);
    printf("Ilosc liczb ujemnych: %d\n", ilosc_ujemnych);
    printf("Suma liczb ujemnych: %d\n", suma_ujemnych);

    return 0;
}