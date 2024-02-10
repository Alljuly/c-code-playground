/*
• Fazer a leitura dos dados de vários alunos.
• Fazer a atualização dos dados de um aluno, dado sua matrícula
• Fazer a exclusão de um aluno, dado sua matrícula
• Imprimir os alunos aprovados
• Imprimir os alunos reprovados
*/

#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"


Aluno* cadastrarTurma(int qnt, Aluno *alunos){
    for(int i = 0; i < qnt; i++){
        Aluno *novoAluno = &alunos[i];
        printf("Nome: ");
        scanf(" %[^\n]", novoAluno->nome);
        printf("Matricula: ");
        scanf(" %[^\n]", novoAluno->matricula);
        printf("Turma: ");
        scanf(" %c", &novoAluno->turma);
        printf("Nota 1: ");
        scanf("%f", &novoAluno->n1);
        printf("Nota 2: ");
        scanf("%f", &novoAluno->n2);
        printf("Nota 3: ");
        scanf("%f", &novoAluno->n3);

        printf("Cadastro concluido!");
    }
    return alunos;
}

float Media(float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
}


void imprimirAlunos(Aluno *alunos, int qnt) {
    printf("Lista de Alunos:\n");
    for (int i = 0; i < qnt; i++) {
        printf("-----------------------\n");
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %s\n", alunos[i].matricula);
        printf("Turma: %c\n", alunos[i].turma);
        printf("Nota 1: %.2f\n", alunos[i].n1);
        printf("Nota 2: %.2f\n", alunos[i].n2);
        printf("Nota 3: %.2f\n", alunos[i].n3);
        printf("-----------------------\n");
    }
}

int main(){
    int opc = 0, qnt = 0;
    Aluno *listaAlunos = NULL;
    Aluno *aprovados = NULL;
    Aluno *reprovados = NULL;
    do {
        printf("1 - Fazer a leitura dos dados de varios alunos\n"
        "2 - Fazer a atualizacao dos dados de um aluno, dado sua matricula\n"
        "3 - Fazer a exclusao de um aluno, dado sua matricula\n"
        "4 - Imprimir os alunos aprovados\n" 
        "5 - Imprimir os alunos reprovados\n");
        scanf("%d",&opc);

        switch (opc) {
        case 1:
            printf("Qual o tamanho da turma: ");
            scanf("%d", &qnt);
            listaAlunos = malloc(qnt * sizeof(Aluno));

            listaAlunos = cadastrarTurma(qnt, listaAlunos);

            free(aprovados);
            free(reprovados);

            aprovados = malloc(qnt * sizeof(Aluno));
            reprovados = malloc(qnt * sizeof(Aluno));


            for(int i = 0; i < qnt ; i++){
                Aluno aluno = listaAlunos[i];
                float media = Media(aluno.n1, aluno.n2, aluno.n3);

                if(media >= 7 ){
                    aprovados[i] = aluno;
                } else {
                    reprovados[i] = aluno;
                }
            }


            break;

        case 2:
            printf("Implemntar");
            break;
        case 3:
            printf("Implemntar");
            break;
        case 4:
        printf("APROVADOS\n");
            imprimirAlunos(aprovados, qnt);
            break;
        case 5:
        printf("Implemntar");
            break;

        }

    } while(opc != 0);

    free(listaAlunos);

    return 0;
}