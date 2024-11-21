/* Escreva um programa que contenha duas variáveis inteiras. 
Compare seus endereços e exiba o maior endereço. */
 

#include <stdio.h>

int main() {

    int a = 12;
    int b = 12;

    if (&a > &b){
        printf("O endereço maior é %p, de %d", &a, a);
    } else{
        printf("O endereço maior é %p, de %d", &b, b);

    }



    return 0;
}