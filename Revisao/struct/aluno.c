#include "aluno.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>



Aluno* cadastrarTurma(int qnt){
    Aluno *alunos;

    alunos = malloc(qnt * sizeof(Aluno));

    for(int i = 0; i < qnt; i++){
        Aluno novoAluno;
        printf("Nome: ");
        scanf(" %s", novoAluno.nome);
        printf("Matricula: ");
        scanf(" %s", novoAluno.matricula);
        printf("Turma: ");
        scanf(" %c", &novoAluno.turma);
        printf("Nota 1: ");
        scanf("%f", &novoAluno.n1);
        printf("Nota 2: ");
        scanf("%f", &novoAluno.n2);
        printf("Nota 3: ");
        scanf("%f", &novoAluno.n3);

        alunos[i] = novoAluno;

        printf("Cadastro concluido!");
    }
    return alunos;
}

Aluno atualizarAluno(){
    
    Aluno aluno;
    printf("Nome: ");
        scanf(" %[^\n]", aluno.nome);
        printf("Matricula: ");
        scanf(" %[^\n]", aluno.matricula);
        printf("Turma: ");
        scanf(" %c", &aluno.turma);
        printf("Nota 1: ");
        scanf("%f", &aluno.n1);
        printf("Nota 2: ");
        scanf("%f", &aluno.n2);
        printf("Nota 3: ");
        scanf("%f", &aluno.n3);

        printf("Cadastro concluido!");

        return aluno;
}

Aluno* removerAluno(Aluno *alunos, int i, int *qnt){
    for(int j = i; j < (*qnt -1); j ++){
        alunos[j] = alunos[j+1];
    }
    (*qnt)--;
    return alunos;
}

float calcMedia(float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
}

void imprimirAlunos(Aluno* turma, char** alunos, int qnt) {
    printf("Lista de Alunos:\n");
    for (int i = 0; i < qnt; i++) {
        if(strcmp(turma[i].matricula, *alunos) == 0){
        printf("-----------------------\n");
        printf("Aluno %d:\n", i+1);
        printf("Nome: %s\n", turma[i].nome);
        printf("Matrícula: %s\n", turma[i].matricula);
        printf("Turma: %c\n", turma[i].turma);
        printf("Nota 1: %.2f\n", turma[i].n1);
        printf("Nota 2: %.2f\n", turma[i].n2);
        printf("Nota 3: %.2f\n", turma[i].n3);
        printf("-----------------------\n");
        }
    }
}