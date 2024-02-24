#include <stdio.h>

int buscarPosicao(int e, int v[], int t) {

  for (int i = 0; i <= t; i++) {
    if (v[i] == e) {
      return i;
    }
  }

  return 0;
}

int main() {
  int vetor[] = {2, 6, 5, 7, 58, 41, 25, 89, 4, 25};
  int tam = sizeof(vetor) / sizeof(vetor[0]);
  int e = 3;
  int posicao = buscarPosicao(e, vetor, tam);

  if (posicao != 0) {
    printf("Elemento na posicao %d ", posicao);
  } else {
    printf("Elemento nao existe.");
  }
  return 0;
}