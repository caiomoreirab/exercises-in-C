/* Considere a seguinte declaração: int a,*b,**c,***d. Escreva um programa que leia
a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
triplo, e d, o quádruplo. */


#include <stdio.h>
int main() {


int a = 10;

int *b;       
int **c;       
int ***d;

b = &a;
c = &b;
d = &c;

printf("%d", (*b) * 2);
printf("%d", (**c) * 3);
printf("%d", (***d) * 4);

 return 0;
}

