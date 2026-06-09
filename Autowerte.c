#include <stdio.h>
#define MAX_VALUE 10
#define CURRENT_YEAR 2026

struct Auto {
    int baujahr;
    int kilometerstand;
};

int main() {
    struct Auto autoarr[MAX_VALUE];
    int jahrcounter = 2000, kmcounter = 10000, kmsum = 0, oldest = 0;

    for (int i = 0; i < MAX_VALUE; i++) {
        autoarr[i].baujahr = jahrcounter;
        autoarr[i].kilometerstand = kmcounter;
        jahrcounter++;
        kmcounter += 10000;
    }

    for (int i = 0; i < MAX_VALUE; i++) {
        oldest = autoarr[0].baujahr;

        if (autoarr[i].baujahr < oldest) {
            oldest = autoarr[i].baujahr;
        }
    }

    for (int i = 0; i < MAX_VALUE; i++) {
        kmsum += autoarr[i].kilometerstand;
    }

    printf("Das älteste Auto ist aus dem Baujahr %d und ist %d Jahre alt.\n", oldest, CURRENT_YEAR - oldest);
    printf("Der durchschnittliche Kilometerstand beträgt: %d\n", kmsum / MAX_VALUE);
}