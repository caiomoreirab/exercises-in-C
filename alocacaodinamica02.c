/* 3) Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro
positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente,
dessa estrutura. Solicite também que o usuário digite os dados desse vetor
dentro da função. */

typedef struct Cadastro
{
    char nome;
    int idade;
    char endereco;
}

int *fazCadastro(int n) {
    int vetor* = (int *) malloc(sizeof(Cadastro));

    






}
