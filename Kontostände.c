#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_VALUE 8

int main() {
    srand(time(NULL));

    int konto[MAX_VALUE], minus = 0, sum = 0;

    for (int i = 0; i < MAX_VALUE; i++) {
        konto[i] = rand() % (10000 + 10000 + 1) - 10000;
        if (konto[i] < 0) {
            minus++;
        }
        sum += konto[i];
        printf("%d ", konto[i]);
    }

    printf("\n\nAnzahl der negativen Kontostände: %d", minus);
    printf("\nGesamtsumme der Kontostände: %d\n", sum);
}