/*
1 - Implemente uma função que receba como parâmetros um vetor de 
números inteiros de tamanho n, e retorne quantos números negativos 
estão armazenados nesse vetor e um novo vetor com os valores negativos.
*/


#include <stdio.h>
#include <stdlib.h>

int* isNegative(int* a, int sizeA, int* num){
    *num = 0;

     for (int i = 0; i < sizeA; i++) {
        if (a[i] < 0) {
            num++;
        }
    }

    int *n = (int*)malloc((*num) * sizeof(int));

    if (n == NULL) {
        printf("Erro malloc.\n");
        return NULL;
    }

    int j = 0;
    for (int i = 0; i < sizeA; i++) {
        if (a[i] < 0) {
            (*n)[j] = v[i];
            j++;
        }
    }

    return n;
}

int main(){
    int a[] = {1, -2, 3, -4, 5, -6};
    int sizeA = sizeof(a) /sizeof( a[0]);
    int n = 0;

    int* negatives = isNegative(a, sizeA, &n);

    printf("Array: ");
    for(int i = 0; i <= sizeA ; i++){
        
        printf("%d", a[i]);
    }

    printf("%d Negatives in Array: ", n);
    for(int i = 0; i <= n ; i++){
        printf("%d", negatives[i]);
    }
      printf("\n");
        free(negatives)
    return 0;
}