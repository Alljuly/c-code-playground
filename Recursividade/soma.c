/*
1. Localize o(s) erro(s) na seguinte função recursiva e explique como
corrigi-lo(s). Essa função  deve calcular a soma dos valores de 0 a n. int
soma(const int n) { if (n == 0) return 0; else return n + soma(n);
} */

#include <stdio.h>
int soma(int n) {
  if (n == 0) {
    return 0;
  }
  printf("%d", n);
  return n + soma(n - 1);
}

int main() {
  int n = 1;
  soma(n);

  return 0;
}
