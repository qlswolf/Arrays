#include <stdio.h>
#include <stdlib.h>

void FillArray(int* arr, char* choice, const int anzahl) {
    int gcounter = 2, ucounter = 1;
    switch (*choice) {
        case 'g':
            for (int i = 0; i < anzahl; i++) {
                arr[i] = gcounter;
                gcounter += 2;
            }
            break;
        case 'u':
            for (int i = 0; i < anzahl; i++) {
                arr[i] = ucounter;
                ucounter += 2;
            }
            break;
        default:
            printf("Fehler: Eingabe hat nicht funktioniert.\n");
            break;
    }
}

void CopyInvertArray(int* arr1, int* arr2, const int anzahl) {
    for (int i = 0; i < anzahl; i++) {
        arr2[i] = arr1[anzahl - 1 - i];
    }
}

void ReplaceThree(int* arr, const int anzahl) {
    for (int i = 0; i < anzahl; i++) {
        if (arr[i] % 3 == 0) {
            arr[i] = 0;
        }
    }
}

void PrintArray(int* arr, const int anzahl) {
    for (int i = 0; i < anzahl; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    const int ANZAHL = 30;
    int arr1[ANZAHL], arr2[ANZAHL];
    char choice;

    system("clear");

    printf("Soll das Feld mit geraden (g) oder ungeraden (u) Zahlen initialisiert werden?\n");
    printf("Eingabe: ");
    choice = getchar();

    FillArray(arr1, &choice, ANZAHL);
    CopyInvertArray(arr1, arr2, ANZAHL);
    ReplaceThree(arr1, ANZAHL);

    printf("\n");
    PrintArray(arr1, ANZAHL);
    printf("\n");
    PrintArray(arr2, ANZAHL);
    printf("\n\n");

    return 0;
}