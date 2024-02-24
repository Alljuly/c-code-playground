#include <stdio.h>

int buscarPosicao(int e, int v[], int t) {

  for (int i = 0; i <= t; i++) {
    if (v[i] == e) {
      return i;
    }
  }

  return 0;
}

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

void ordenar(int v[], int t, int *trocas) {

  for (int i = 0; i < t - 1; i++) {
    for (int j = 0; j < t - i - 1; j++) {
      if (v[j] > v[j + 1]) {
        int aux = v[j];
        v[j] = v[j + 1];
        v[j + 1] = aux;

        (*trocas)++;
      }
    }
  }
}

int main() {
  int vetor[] = {2, 6, 5, 7, 58, 25, 89, 4, 25, 41};
  int tam = sizeof(vetor) / sizeof(vetor[0]);
  int trocas = 0;
  int e = 7;
  int posicao = buscarPosicao(e, vetor, tam);

  if (posicao != 0) {
    printf("Elemento na posicao %d ", posicao);
  } else {
    printf("Elemento nao existe.");
  }

  printf("\nBusca Binaria\n");

  posicao = buscaBinaria(e, vetor, tam);

  if (posicao != 0) {
    printf("Elemento na posicao %d", posicao);
  } else {
    printf("Elemento nao existe.");
  }

  printf("Meu vetor:\n");
  for (int i = 0; i < tam; i++) {
    printf("%d ", vetor[i]);
  }

  ordenar(vetor, tam, &trocas);

  printf("\nMeu vetor ordenado:\n");
  for (int i = 0; i < tam; i++) {
    printf("%d ", vetor[i]);
  }

  printf("\nTrocas feitas: %d", trocas);

  return 0;
}