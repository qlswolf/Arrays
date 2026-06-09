#include <stdio.h>
#include <stdlib.h>
#define CURRENT_YEAR 2026
#define MAX_VALUE 20

float findAverage(int* arr) {
    int sum = 0, sumCounter = 0;

    for (int i = 0; i < MAX_VALUE; i++) {
        int temp = CURRENT_YEAR - arr[i];
        sum += temp;
        sumCounter++;
    }

    return (sum / sumCounter);
}

int findOldest(int* arr) {
    int oldest = arr[0];
    for (int i = 0; i < MAX_VALUE; i++) {
        if (arr[i] > oldest) {
            oldest = arr[i];
        }
    }
    return oldest;
}

int main() {
    int arrPeople[MAX_VALUE]; 

    printf("Geburtsjahre der Personen\n");
    printf("-------------------------\n\n");

    for (int i = 0; i < MAX_VALUE; i++) {
        printf("Gib für Person an Stelle %d das Geburtsjahr ein: ", i);
        scanf("%d", arrPeople[i]);
        printf("\n");
    }
    printf("Der Altersdurchschnitt beträgt: %.2f\n", findAverage(arrPeople));
    printf("Die älteste Person ist %d Jahre alt", findOldest(arrPeople));
}