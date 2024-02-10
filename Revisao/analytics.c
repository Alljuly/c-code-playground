/*
4. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário
e número de filhos. A prefeitura deseja saber:
• O número de pessoas com mais de 4 filhos
• Média do número de filhos;
• Maior salário;
• Menor salário;
O final da leitura de dados se dará com a entrada de um salário negativo.
*/

#include <stdio.h>

int main (){
    double mediaFilhos = 0;
    int    filhos4 = 0;
    double salMaior = 0, salMenor = 0;
    double auxSal = 0;
    int count = 0;
    do {

        printf("Salario:\n");
        scanf("%lf", &auxSal);

        if(auxSal < 0 ){
            break;
        }

        if(salMaior < auxSal){
            salMaior = auxSal;
        }
        if(count == 0){
            salMenor = auxSal;
        } else if(salMenor > auxSal){
            salMenor = auxSal;
        }

        int aux = 0;
        printf("Filhos:\n");
        scanf("%d",&aux);
        if(aux > 4){
            filhos4++;
        }

        mediaFilhos += aux;

        count++;


    } while (auxSal > 0);

    mediaFilhos /= count;

   if(count > 0){ printf("Media de filhos: %.2lf\n", mediaFilhos);
        printf("Pessoas entrevistadas: %d\n", count);
        printf("Maior salario: %.2lf\n", salMaior);
        printf("Menor salario: %.2lf\n", salMenor);
        printf("Pessoas com mais de 4 filhos: %d\n", filhos4);
    } else {
    printf("Nenhum dado adicionado");
    }
}