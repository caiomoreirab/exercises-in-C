/* 6) Escreva um programa que aloque dinamicamente uma matriz de inteiros. 
As dimensões da matriz deverão ser lidas do usuário. Em seguida, escreva uma função
que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no
caso contrário. */


#include <stdio.h>
#include <stdlib.h>

int verificaValor(int x, int **vetor, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vetor[i][j] == x) {
                return 1;
            }
        }
    }
    return 0;
}


int main () {

    int n;
    int m;
    printf("Digite as dimensões do Vetor: \n Linhas: \nColunas: " );
    scanf("%d %d", &n, &m);

    // Alocação dinâmica da matriz
    int **matriz = (int **)malloc(n * sizeof(int *)); // Aloca memória para as linhas
    if (matriz == NULL) {
        printf("Erro ao alocar memória para as linhas.\n");
        return 1; // Código de erro
    }
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(m * sizeof(int)); // Aloca memória para as colunas de cada linha
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória para as colunas.\n");
            return 1; // Código de erro
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Digite o numero da posição: \n");
            scanf("%d", &matriz[i][j]);   
        }
    }
}