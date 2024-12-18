5. Escreva um algoritmo que usando o TAD Stack retorna TRUE se uma cadeia de
caracteres consiste em um número de 'A's seguido por um número igual de 'B's. Em
cada ponto, você pode ler apenas o próximo caractere da cadeia de caracteres. O
algoritmo não deve contar o número de 'A's.
int VerificaNumASeguidoB( char * str, int len)




//Usando duas pilhas 
int VerificaNumASeguidoB( char * str, int len) {
    if (str != NULL && len > 1) {
        void *eml;
    Stack *stk = stkCreate(len);
    Stack *stk2 = stkCreate(len);

    if(stk != NULL && stk2 != NULL) {
        while(str[i] == 'A') {
            elm = str[i];
            stkPush(stk, eml)
            i++;
        }

        while(str[i] == 'B') {
            elm = str[i];
            stkPush(stk2, eml)
            i++;
        }

        if (stk->top == stk2->top) {
            return true
        }
    }
    return false;
}


5. Escreva um algoritmo que usando o TAD Stack retorna TRUE se uma cadeia de
caracteres consiste em um número de 'A's seguido por um número igual de 'B's. Em
cada ponto, você pode ler apenas o próximo caractere da cadeia de caracteres. O
algoritmo não deve contar o número de 'A's.
int VerificaNumASeguidoB( char * str, int len)


//Uma pilha: 
int VerificaNumASeguidoB( char * str, int len) {
    if (str != NULL && len > 1) {
        void *eml;
        Stack *stk = stkCreate(len);

        for (int i =0; i < len; i++) {
            if(str[i] == 'A'){
            stkPush(stk, str[i])
            }
        }
        for (int i =0; i < len; i++) {
            if(str[i] == 'B'){
            stkPop(stk);
            }

        }
        
    

}
