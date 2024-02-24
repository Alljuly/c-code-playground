#include <stdio.h>

void ordenar(int v[], int t) {

  for (int i = 0; i < t - 1; i++) {
    for (int j = 0; j < t - i - 1; j++) {
      if (v[j] > v[j + 1]) {
        int aux = v[j];
        v[j] = v[j + 1];
        v[j + 1] = aux;
      }
    }
  }
}

int main() {
  int vetor[] = {2, 6, 5, 7, 58, 41, 25, 89, 4, 25};
  int tam = sizeof(vetor) / sizeof(vetor[0]);

  printf("Meu vetor:\n");
  for (int i = 0; i < tam; i++) {
    printf("%d ", vetor[i]);
  }

  ordenar(vetor, tam);

  printf("\nMeu vetor ordenado:\n");
  for (int i = 0; i < tam; i++) {
    printf("%d ", vetor[i]);
  }

  return 0;
}