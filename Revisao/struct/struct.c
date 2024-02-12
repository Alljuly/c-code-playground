/*
• Fazer a leitura dos dados de vários alunos. 
• Fazer a atualização dos dados de um aluno, dado sua matrícula
• Fazer a exclusão de um aluno, dado sua matrícula
• Imprimir os alunos aprovados
• Imprimir os alunos reprovados
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"
#include "aluno.c"




        
char** verificarMedia(Aluno* lista, int aux, int qnt){
    char** reprov =malloc(qnt * sizeof(char*));
    char** aprov = malloc(qnt * sizeof(char*));


    for(int i = 0; i < qnt; i++){
        reprov =malloc(9 * sizeof(char));
        aprov =malloc(9 * sizeof(char));

        float media = calcMedia(lista[i].n1, lista[i].n2, lista[i].n3);
        if(media < 7 ){
            strcpy(reprov[i], lista[i].matricula);
        } else if(media >= 7){
            strcpy(aprov[i], lista[i].matricula);
        }
    }

    if(aux == 1){
        return aprov;
    } else {
        return reprov;
    }

}

Aluno* alterarTurma(Aluno *lista, char* matricula, int alterar, int qnt){
    for(int i = 0; i < qnt; i++){
        if((strcmp(lista[i].matricula, matricula)) == 0){
            if(alterar == 1){
                return removerAluno(lista, i, &qnt);
            } else if(alterar == 2){
               lista[i] = atualizarAluno();
            }
        }
    }

    return lista;
}

int main(){
    int opc = 0, qnt = 0;
    Aluno *listaAlunos = NULL;
    char aux[8];

    do {
        printf("\n1 - Fazer a leitura dos dados de varios alunos\n"
        "2 - Fazer a atualizacao dos dados de um aluno, dado sua matricula\n"
        "3 - Fazer a exclusao de um aluno, dado sua matricula\n"
        "4 - Imprimir os alunos aprovados\n" 
        "5 - Imprimir os alunos reprovados\n"
        "0 - Sair\n");
        scanf("%d",&opc);

        switch (opc) {
        case 1:
            printf("Qual o tamanho da turma: ");
            scanf("%d", &qnt);
            listaAlunos = cadastrarTurma(qnt);
            printf("\nTurma criada!");
            break;

        case 2:
            printf("Matricula: ");
            scanf(" %[^\n]",aux);
            alterarTurma(listaAlunos, aux, 2, qnt);
            printf("Turma alterada!");
            break;

        case 3:

            printf("Matricula: ");
            scanf(" %[^\n]",aux);

            alterarTurma(listaAlunos, aux, 1, qnt);
            break;

        case 4:
            printf("----------------------\nAPROVADOS\n");
            char** lista = verificarMedia(listaAlunos, 1, qnt);
            imprimirAlunos(listaAlunos, lista, qnt);

            break;

        case 5:
            printf("----------------------\nREPROVADOS\n");
            lista = verificarMedia(listaAlunos, 2, qnt);
            imprimirAlunos(listaAlunos, lista, qnt);

            break;
        }

    } while(opc != 0);

    free(listaAlunos);

    return 0;
}