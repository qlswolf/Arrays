#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("clear");

    printf("Sieb des Eratosthenes\n");
    printf("---------------------\n\n");

    const int max_limit = 200;
    int arr[max_limit + 1], n = 0;

    for (int i = 1; i <= max_limit; i++)    // Array Initialisierung
    {    
        arr[i] = i;
    }

    for (int i = 2; i <= max_limit; i++)    // Sieb von Eratosthenes
    {    
        if (arr[i] != 0) 
        {
            for (int j = 2 * i; j <= max_limit; j += i)
            {
                arr[j] = 0;
            }

            printf("%d ", arr[i]);
            n++;
        }
    }

    printf("\n\n-----------------------------------------------------\n");
    printf("Anzahl der Primzahlen: %d\n\n\n", n);

    return 0;
}