// * Mesclando dois exercícios:

//a)
// Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
// do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
// utilize índices para percorrer o vetor, apenas aritmética de ponteiros.


//b)
// Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
// índices para percorrer o vetor, apenas aritmética de ponteiros. */



//a)

#include <stdio.h>

int preencheVetor(int *v, int n, int valor) {

    int *point = v;
    
    for (int i = 0; i < n; i ++) {
        *point = valor;
        point++;
    }
}




//b)
int imprimeVetor(int *v, int n) {
    int *point = v;
    for (int i = 0; i < n; i ++) {
        printf("%d", *point);
        point++;
    }
    printf("\n");
}



int main() {
    int vetor[5];
    int n = 5;
    int valor = 10;

    // Preenche o vetor com o valor 10
    preencheVetor(vetor, n, valor);

    // Imprime o vetor
    printf("Vetor preenchido: ");
    imprimeVetor(vetor, n);

    return 0;
}
