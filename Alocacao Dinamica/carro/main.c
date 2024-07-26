#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    float preco;
    char fabricante[50];
    char placa[10];
} Carro;

Carro* criarVetorCarros(int n) {
    Carro* carros = (Carro*)malloc(n * sizeof(Carro));
    if (carros == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    return carros;
}

void imprimirCarros(Carro* carros, int n) {
    for (int i = 0; i < n; i++) {
        printf("Carro %d:\n", i + 1);
        printf("Preco: %.2f\n", carros[i].preco);
        printf("Fabricante: %s\n", carros[i].fabricante);
        printf("Placa: %s\n", carros[i].placa);
        printf("\n");
    }
}

void atualizarCarro(Carro* carros, int n, const char* placa, float novoPreco, const char* novoFabricante, const char* novaPlaca) {
    for (int i = 0; i < n; i++) {
        if (strcmp(carros[i].placa, placa) == 0) {
            carros[i].preco = novoPreco;
            strcpy(carros[i].fabricante, novoFabricante);
            strcpy(carros[i].placa, novaPlaca);
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

    Carro* carros = criarVetorCarros(n);

    for (int i = 0; i < n; i++) {
        printf("Digite os dados do carro %d:\n", i + 1);
        printf("Preco: ");
        scanf("%f", &carros[i].preco);
        printf("Fabricante: ");
        scanf("%s", carros[i].fabricante);
        printf("Placa: ");
        scanf("%s", carros[i].placa);
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

    atualizarCarro(carros, n, placa, novoPreco, novoFabricante, novaPlaca);

    imprimirCarros(carros, n);

    free(carros);

    return 0;
}
