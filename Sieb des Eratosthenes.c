#include <stdio.h>

int main() 
{
    int arr[201], n = 0;

    for (int i = 1; i <= 200; i++) {
        arr[i] = i;
    }

    for (int i = 2; i <= 200; i++) {
        if (arr[i] != 0) {
            for (int j = i * i; j <= 200; j += i) {
                arr[j] = 0;
            }
        }
    }

    for (int i = 2; i <= 200; i++) {
        if (arr[i] != 0) {
            printf("%d ", arr[i]);
            n++;
        }
    }
    printf("\n-----------------------------------------------------\n");
    printf("Anzahl der Primzahlen: %d\n", n);

    return 0;
}