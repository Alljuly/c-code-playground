#include <stdio.h>

int buscaBinaria(int e, int v[], int t) {
  int i = 0, f = t - 1;

  while (i <= f) {
    int m = (i + f) / 2;

    if (v[m] == e) {
      return m;
    } else if (v[m] < e) {
      i = m + 1;
    } else {
      f = m - 1;
    }
  }

  return 0;
}

int main() {
  int vetor[] = {1, 2, 4, 5, 9, 10};
  int tam = sizeof(vetor) / sizeof(vetor[0]);
  int e = 5;
  int posicao = buscaBinaria(e, vetor, tam);

  if (posicao != 0) {
    printf("Elemento na posicao %d ", posicao);
  } else {
    printf("Elemento nao existe.");
  }
  return 0;
}