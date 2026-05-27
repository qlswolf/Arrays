#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    const int SIZE = 20;
    int arr[SIZE], evenarr[SIZE], oddarr[SIZE];
    int even_count = 0, odd_count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            evenarr[even_count] = arr[i];
            even_count++;
        } else {
            oddarr[odd_count] = arr[i];
            odd_count++;
        }
    }

    for (int i = 0; i < SIZE; i++) {
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
