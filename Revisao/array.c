/*
5. Fazer um programa que declare e inicialize um vetor de 10 posições para guardar números inteiros.
Calcule e mostre: a média dos valores digitados, a quantidade de números pares, a quantidade de
números ímpares.
*/

#include <stdio.h>


int main(){
    int pos[10];
    double soma = 0;
    int par = 0, impar = 0;

    for(int i = 0; i<10;i++){
        scanf("%d",&pos[i]);
        soma += pos[i];

        if(pos[i] % 2 == 0){
            par++;
        } else{
            impar++;
        }
    }

    double media = soma / 10;

    printf("Media: %.2lf\n",media);
    printf("Pares: %d\n",par);
    printf("Impares: %d\n",impar);


}