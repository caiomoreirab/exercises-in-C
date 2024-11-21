/* Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido; */ 

#include <stdio.h>

int main() {
    int n = 5;
    int array[n];

    for (int i = 0; i < n; i++) {
        printf("digite um valor para o array:\n");
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < n; i++) {
        printf("%p", 2*(&array[i]));
    }




    return 0;
}