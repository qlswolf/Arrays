#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_VALUE 20

int main() {
    srand(time(NULL));
    int random = rand() % (145 - 70 + 1) + 70;
    int pulsarr[MAX_VALUE], hcounter = 0, lowest = 0;

    for (int i = 0; i < MAX_VALUE; i++) {
        pulsarr[i] = random;
    }

    lowest = pulsarr[0];

    for (int i = 0; i < MAX_VALUE; i++) {
        if (pulsarr[i] > 100) {
            hcounter++;
        }
    }

    for (int i = 0; i < MAX_VALUE; i++) {
        if (pulsarr[i] < lowest)  {
            lowest = pulsarr[i];
        }   
    }

    printf("Gesamtwerte über 100: %d\n", hcounter);
    printf("Kleinster Wert: %d\n", lowest);
}