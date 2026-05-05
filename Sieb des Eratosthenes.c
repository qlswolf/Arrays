#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("clear");

    printf("Sieb des Eratosthenes\n");
    printf("---------------------\n\n");

    int arr[201], n = 0;

    for (int i = 1; i <= 200; i++) {    // Array Initialisierung
        arr[i] = i;
    }

    for (int i = 2; i <= 200; i++) {    // Sieb von Eratosthenes
        if (arr[i] != 0) {
            for (int j = i * i; j <= 200; j += i) {
                arr[j] = 0;
            }
            printf("%d ", arr[i]);
            n++;
        }
    }

    printf("\n\n-----------------------------------------------------\n");
    printf("Anzahl der Primzahlen: %d\n\n\n", n);

    return 0;
}