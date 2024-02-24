#include <stdio.h>

void ordenar(int v[], int t) {
  if (t == 1) {
    return;
  }
  for (int i = 0; i < t; i++) {
    if (v[i] > v[i + 1]) {
      int aux = v[i];
      v[i] = v[i + 1];
      v[i + 1] = aux;
    }
  }
}

void ordenaRecursiva(int v[], int t) {
  if (t <= 1) {
    return;
  }

  ordenar(v, t);

  ordenaRecursiva(v, t - 1);
}

int main() {
  int vetor[] = {9, 2, 5, 7, 1, 4, 3, 6, 8};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);

  printf("Vetor original:\n");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  ordenaRecursiva(vetor, tamanho);

  printf("Vetor ordenado em ordem crescente:\n");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}
