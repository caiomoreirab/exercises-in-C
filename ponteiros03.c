/* Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido; */ 

#include <stdio.h>

//Basicamente a aritimetica esta sendo usada para avançar ++ e para subistituir o index;

int main() {
    int n = 5;
    int array[n];
    int *pont = array;

    for (int i =0; i < 5; i++) {
        printf("Digite um número para o vetor:\n");
        scanf("%d", pont);
        pont++;
    }

    pont = array; // Reposiciona o ponteiro para o início do array
    printf("\nDobro dos valores digitados:\n");

    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, (*pont) * 2); // Imprime o dobro do valor
        pont++; // Move o ponteiro para o próximo elemento
    }



    return 0;
}

//O * no (*pont) * 2 é usado para desreferenciar o ponteiro. 

//Ponteiro e Desreferenciação
//Quando você tem um ponteiro, ele armazena o endereço de uma variável, não o valor diretamente. Para acessar o valor da variável que o ponteiro aponta, você desreferencia o ponteiro, ou seja, acessa o conteúdo do endereço apontado. A desreferenciação é feita usando o operador *.

//(*pont) * 2
//Aqui está o que acontece:

//pont é um ponteiro que aponta para o primeiro elemento do array array.
//*pont desreferencia o ponteiro, ou seja, acessa o valor armazenado na posição de memória para onde pont aponta (no caso, o valor de um dos elementos do array).
//(*pont) * 2 então pega o valor apontado por pont e o multiplica por 2.
//Exemplo:
//Suponha que o array tenha os valores {1, 2, 3, 4, 5}. Quando você escreve (*pont) * 2, o ponteiro pont pode inicialmente apontar para array[0] (que tem o valor 1). O código fará:

//*pont acessa o valor de array[0], ou seja, 1.
//(*pont) * 2 então calcula 1 * 2, que é 2.
//Esse processo se repete para os outros valores do array, pois o ponteiro é incrementado em cada iteração do laço.

//Por que não usar pont * 2 diretamente?
//Usar pont * 2 não faz sentido no contexto de um ponteiro, porque isso tentaria multiplicar o endereço de memória (armazenado no ponteiro) por 2, o que não é a operação desejada.

//Portanto, o uso do * é necessário para acessar o valor armazenado no endereço para onde o ponteiro está apontando.