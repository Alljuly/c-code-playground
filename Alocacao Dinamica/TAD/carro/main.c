#include "carro.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Carro *criarVetorCarros(int n) {
  Carro *carros = (Carro *)malloc(n * sizeof(Carro));
  if (carros == NULL) {
    printf("Erro ao alocar memória.\n");
    exit(1);
  }
  return carros;
}

void imprimirCarros(const Carro *carros, int n) {
  for (int i = 0; i < n; i++) {
    printf("Carro %d:\n", i + 1);
    imprimirCarro(&carros[i]);
    printf("\n");
  }
}

void atualizarCarroPorPlaca(Carro *carros, int n, const char *placa,
                            float novoPreco, const char *novoFabricante,
                            const char *novaPlaca) {
  for (int i = 0; i < n; i++) {
    if (compararPlaca(&carros[i], placa)) {
      atualizarCarro(&carros[i], novoPreco, novoFabricante, novaPlaca);
      printf("Carro com a placa %s atualizado com sucesso.\n", placa);
      return;
    }
  }
  printf("Carro com a placa %s não encontrado.\n", placa);
}

int main() {
  int n;
  printf("Quantos carros deseja cadastrar? ");
  scanf("%d", &n);

  Carro *carros = criarVetorCarros(n);

  for (int i = 0; i < n; i++) {
    float preco;
    char fabricante[50];
    char placa[10];

    printf("Digite os dados do carro %d:\n", i + 1);
    printf("Preco: ");
    scanf("%f", &preco);
    printf("Fabricante: ");
    scanf("%s", fabricante);
    printf("Placa: ");
    scanf("%s", placa);

    carros[i] = criarCarro(preco, fabricante, placa);
  }

  imprimirCarros(carros, n);

  char placa[10];
  float novoPreco;
  char novoFabricante[50];
  char novaPlaca[10];

  printf("Digite a placa do carro que deseja atualizar: ");
  scanf("%s", placa);
  printf("Digite o novo preco: ");
  scanf("%f", &novoPreco);
  printf("Digite o novo fabricante: ");
  scanf("%s", novoFabricante);
  printf("Digite a nova placa: ");
  scanf("%s", novaPlaca);

  atualizarCarroPorPlaca(carros, n, placa, novoPreco, novoFabricante,
                         novaPlaca);

  imprimirCarros(carros, n);

  free(carros);

  return 0;
}
