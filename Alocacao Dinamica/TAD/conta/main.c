#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numeroConta;
    float saldo;
} ContaBancaria;

ContaBancaria criarConta(int numeroConta, float saldoInicial) {
    ContaBancaria conta;
    conta.numeroConta = numeroConta;
    conta.saldo = saldoInicial;
    return conta;
}

void depositar(ContaBancaria* conta, float valor) {
    if (valor > 0) {
        conta->saldo += valor;
        printf("Deposito de %.2f realizado com sucesso.\n", valor);
    } else {
        printf("Valor de deposito invalido.\n");
    }
}

void sacar(ContaBancaria* conta, float valor) {
    if (valor > 0 && conta->saldo >= valor) {
        conta->saldo -= valor;
        printf("Saque de %.2f realizado com sucesso.\n", valor);
    } else {
        printf("Saldo insuficiente ou valor de saque invalido.\n");
    }
}

void imprimirSaldo(ContaBancaria conta) {
    printf("Saldo atual da conta %d: %.2f\n", conta.numeroConta, conta.saldo);
}

int main() {
    ContaBancaria minhaConta = criarConta(12345, 1000.0);

    imprimirSaldo(minhaConta);

    depositar(&minhaConta, 500.0);
    imprimirSaldo(minhaConta);

    depositar(&minhaConta, -100.0);
    imprimirSaldo(minhaConta);

    sacar(&minhaConta, 200.0);
    imprimirSaldo(minhaConta);

    sacar(&minhaConta, 2000.0);
    imprimirSaldo(minhaConta);

    return 0;
}
