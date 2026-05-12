#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int arr[20], evenarr[20], oddarr[20];
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < 20; i++) {
        arr[i] = rand() % 100 + 1; // Zufällige Zahlen zwischen 1 und 100
    }

    for (int i = 0; i < 20; i++) {
        if (arr[i] % 2 == 0) {
            evenarr[even_count] = arr[i];
            even_count++;
        } else {
            oddarr[odd_count] = arr[i];
            odd_count++;
        }
    }

    for (int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Gerade Zahlen:\n");
    for (int i = 0; i < even_count; i++) {
        if (evenarr[i] != 0) {
            printf("%d ", evenarr[i]);
        }
    }
    printf("\n");

    printf("Ungerade Zahlen:\n");
    for (int i = 0; i < odd_count; i++) {
        if (oddarr[i] != 0) {
            printf("%d ", oddarr[i]);
        }
    }
    printf("\n");
    return 0;
}
