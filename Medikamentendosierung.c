#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_VALUE 12

int main() {
    srand(time(NULL));
    int random = rand() % (150 - 20 + 1) + 20;

    int medidos[MAX_VALUE], max = medidos[0], sum = 0;

    for (int i = 0; i < MAX_VALUE; i++) {
        medidos[i] = random;
        if (medidos[i] > max) {
            max = medidos[i];
        }
        sum += medidos[i];
    }
    
    printf("Höchste Dosis: %d\n", max);
    printf("Gesamtdosis: %d\n", sum);
}