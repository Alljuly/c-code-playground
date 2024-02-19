/*
5. A série de Fibonacci é formada pela seguinte sequência de números: 0, 1, 2, 3, 5, 8, 13, 21, ... 
O primeiro número da série é 0, o segundo é 1 e os demais são a soma dos dois números  anteriores. 
Podemos então definir o valor de um termo da série de Fibonacci como sendo: 
*/

#include <stdio.h>
#include <stdlib.h>


int fibo(int n){
    if(n == 0){
        return 0;
    } else if(n == 1 || n == 2){
        return 1;
    } else {
        return fibo(n - 1) + (n - 2);
    }
}

int main(){
    int x;
    printf("Digite um numero\n");
    scanf(" %d", &x);

    int aux = fibo(x);

    printf("Na sequencia fibonacci: %d", aux);


    return 0;
}