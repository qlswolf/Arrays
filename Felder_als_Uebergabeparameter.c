#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define NUM_OF_VALUES 10

void generateData(float* data, int len) 
{
    for (int i = 0; i < len; i++) 
    {
        data[i] = ((float)rand() / RAND_MAX) * 10 + 10;
    }
}

void readData(float* data, int len) {
    for (int i = 0; i < len; i++) {
        printf("Geben Sie die Messdaten für Stelle %d ein: ", i);
        scanf("%f", &data[i]);
    }
}

void printData(float* data, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%.2f\n", data[i]);
    }
}

float maximum(float* data, int len) {
    int max = data[0];
    for (int i = 0; i < len; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

float minimum(float* data, int len) {
    int min = data[0];
    for (int i = 0; i < len; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

float average(float* data, int len) {
    float sum = 0;
    for (int i = 0; i < len; i++) 
    {
        sum += data[i];
    }
    return sum / len;
}

float stddev(float* data, int len, float average) {
    float result = 0;
    for (int i = 0; i < len; i++) {result += pow(data[i] - average, 2);}
    float s = sqrt((result) / len - 1);
    return s;
}

int main()
{
    float values[NUM_OF_VALUES] = { 0 };
    srand(time(NULL));
    readData(values, NUM_OF_VALUES);
    printf("\n");
    printData(values, NUM_OF_VALUES);
    printf("\nDas Maximum betraegt: %.2f", maximum(values, NUM_OF_VALUES));
    printf("\nDas Minimum betraegt: %.2f", minimum(values, NUM_OF_VALUES));
    printf("\n\nDer Mittelwert betraegt: %.2f", average(values, NUM_OF_VALUES));
    printf("\n\nDie Standardabweichung betraegt: %.2f\n\n", stddev(values, NUM_OF_VALUES, average(values, NUM_OF_VALUES)));
    return 0;
}