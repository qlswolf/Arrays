#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void bubble_sort(int* arr, int n) {         // Bubble Sort Algorithmus
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_array(int* arr, int n) {         // Array-Ausgabe
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));

    int seq1[SIZE], seq2[SIZE], sumseq[2 * SIZE], finalseq[2 * SIZE], final_count = 0;

    for (int i = 0; i < SIZE; i++) {        // Array-Init mit Zufallszahlen
        seq1[i] = rand() % SIZE + 1;
        seq2[i] = rand() % SIZE + 1;
    }

    for (int i = 0; i < SIZE; i++) {        // Beide Arrays in ein neues Array kopieren
        sumseq[i] = seq1[i];
        sumseq[i + SIZE] = seq2[i];
    }

    bubble_sort(sumseq, 2 * SIZE);

    for (int i = 0; i < 2 * SIZE; i++) {    // Mehrfache Werte entfernen
        if (i == 0 || sumseq[i] != sumseq[i - 1]) {
            finalseq[final_count] = sumseq[i];
            final_count++;
        }
    }

    printf("Sequence 1:\n");
    print_array(seq1, SIZE);

    printf("\n");

    printf("Sequence 2:\n");
    print_array(seq2, SIZE);

    printf("\n");

    printf("Summarized Sequence:\n");
    print_array(finalseq, final_count);

    printf("\n");
    return 0;
}