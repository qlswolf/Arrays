#include <stdio.h>
#define SIZE 10

float min(float arr[], int size) 
{
  float min_value = arr[0];
  for (int i = 0; i < size; i++) 
  {
    if (arr[i] < min_value) 
    {
      min_value = arr[i];
    }
  }
  return min_value;
}

float max(float arr[], int size) 
{
  float max_value = arr[0];
  for (int i = 0; i < size; i++) 
  {
    if (arr[i] > max_value) 
    {
      max_value = arr[i];
    }
  }
  return max_value;
}

float sum(float arr[], int size) 
{
  float total = 0;
  for (int i = 0; i < size; i++) 
  {
    total += arr[i];
  }
  return total;
}

float average(float arr[], int size) 
{
   return sum(arr, size) / size; 
}

int main() 
{

  float messwerte1[SIZE], messwerte2[SIZE];

  for (int i = 0; i < SIZE; i++) 
  {
    printf("Geben Sie Messwert %d ein: ", i);
    scanf("%f", &messwerte1[i]);
  }

  for (int i = 0; i < SIZE; i++) 
  {
    messwerte1[i] += 2.7;
  }

  for (int i = 0; i < SIZE; i++) 
  {
    printf("Messwert %d: %.2f\n", i + 1, messwerte1[i]);
  }

  for (int i = 0; i < SIZE; i++) 
  {
    messwerte2[SIZE - 1 - i] = messwerte1[i];
  }

  float maxvalue = max(messwerte1, SIZE);
  float minvalue = min(messwerte1, SIZE);

  printf("Der maximale Messwert ist: %.2f\n", maxvalue);
  printf("Der minimale Messwert ist: %.2f\n", minvalue);
  printf("Der Durchschnitt der Messwerte ist: %.2f\n", average(messwerte1, SIZE));
  printf("Die Summe der Messwerte ist: %.2f\n", sum(messwerte1, SIZE));
  printf("Die umgekehrten Messwerte sind: ");

  for (int i = 0; i < SIZE; i++) 
  {
    printf("%.2f ", messwerte2[i]);
  }

  return 0;
}