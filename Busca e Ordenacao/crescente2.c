#include <stdio.h>

void ordenar2(int v[], int t) {
  for (int i = 0; i < t; i++) {
    int min = i;

    for (int j = i + 1; j < t; j++) {
      if (v[min] > v[j]) {
        min = j;
      }
    }

    int aux = v[i];
    v[i] = v[min];
    v[min] = aux;
  }
}

int main() {
  int vetor[] = {5, 2, 4, 9, 2, 56, 87, 12};
  int t = sizeof(vetor) / sizeof(vetor[0]);

  printf("\nMeu vetor:\n");
  for (int i = 0; i < t; i++) {
    printf(" %d", vetor[i]);
  }

  ordenar2(vetor, t);

  printf("\nMeu vetor ordenado:\n");
  for (int i = 0; i < t; i++) {
    printf(" %d", vetor[i]);
  }

  return 0;
}