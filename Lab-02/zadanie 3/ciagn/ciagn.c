#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, liczba, suma_parzystych = 0;

    printf("Podaj liczbe elementow ciagu (n > 0): ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("Liczba elementow musi byc wieksza od 0.\n");
        return 1; 
    }

    printf("Wprowadz %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Liczba %d: ", i + 1);
        scanf_s("%d", &liczba);

        if (liczba % 2 == 0) {
            suma_parzystych += liczba;
        }
    }

    printf("Suma liczb parzystych: %d\n", suma_parzystych);

    return 0;
}
