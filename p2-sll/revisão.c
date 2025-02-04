// a. Na primeira posição

int inserirPrimeiro(SLList *l, void *data){
    if(l != NULL){
        newnode = (Node)malloc(sizeof(Node*))
        if (newnode != NULL){

            l->first = newnode;
            newnode->data = data;
            newnode->next = atual;
            return true;
        }
    }
    return NULL;
}

// b. Na úlMma posição da lista.

int insereNaUltima(SLList *l, void *data) {
    if (l != NULL) {

        Node *newnode = (Node*)malloc(sizeof(Node)); 
    if (newnode != NULL ) {

    newnode->data = data;
    newnode->next = NULL;

    if (l->first == NULL) {  // Caso a lista esteja vazia
        l->first = newnode;
    } else {
        Node *atual = l->first;
        while (atual->next != NULL) {  // Percorre até o último nó
            atual = atual->next;
        }
        atual->next = newnode;  // Insere no final corretamente
    } 
    return 1; // Sucesso
}

int insereNaUltima(SLList *l, void *data) {
    if (l != NULL){
        Node *newnode = (Node)malloc(sizeof(Node*));
        if (newnode != NULL){
            if(l->first = NULL) { //ve se ta vazia
            l->first = newnode;
            newnode->data = data;
            newnode->next = NULL;
            } else {
                Node *atual = l->first;
                while(atual->next!= NULL) {
                    atual = atual->next;
                }
                atual->data = data;
            }
            return 1;
        }
    }
    return 0;
}


//correto//
int insereNaUltima(SLList *l, void *data) {
    if (l == NULL) return 0;  // Verifica se a lista existe

    Node *newnode = (Node*)malloc(sizeof(Node)); 
    if (newnode == NULL) return 0;  // Falha na alocação de memória

    newnode->data = data;
    newnode->next = NULL;

    if (l->first == NULL) {  // Se a lista está vazia
        l->first = newnode;
    } else {
        Node *atual = l->first;
        while (atual->next != NULL) {  // Percorre até o último nó
            atual = atual->next;
        }
        atual->next = newnode;  // Insere o novo nó no final
    }

    return 1; // Sucesso
}


//Na posição k-ésima da lista se esta posição exisMr

int addNaEnesima(SLList *l, void *data, int k){
    if(l != NULL && k >= 0){
        Node *newnode = (Node*)malloc(sizeof(Node)); 
        if (newnode != NULL) {
        if(l-> first == NULL && k == 0){
            newnode -> data = data;
            newnode -> next = l->first //null
            l->first = newnode;
        } else {
        int cont = 0;
        Node *atual = l->first;
        while(cont != k-1){
            atual = atual->next;
            cont ++;
        }
        Node *prov = atual;
        atual->next = newnode;
        newnode->next = atual->next;
        newnode->data = data;
        }
        }
        return 1;
    }
    return 0;
}

// Após um nó idenMficado por uma chave key

int removeNokey(SLList *l, SLnode *key, void *data){
    if (l!= NULL){
        Node *newnode = (Node*)malloc(sizeoff(Node));
        if(newnode != NULL){
            if(l->first != NULL) {
                Node *atual = l->first;
                while(atual->next != key->next && atual->data != key->data){
                    atual = atual->next;
                }
                Node *prov = atual->next;
                atual->next = prov->next;
                atual->next = prov-next;
                free(prov)
                return true;
            }

        }
    }
    return false;
}

// coreto:

int removeNokey(SLList *l, SLnode *key, void *data) {
    if (l != NULL && key != NULL) {
        if (l->first != NULL) {
            Node *atual = l->first;

            // Caso especial: se o nó a ser removido for o primeiro da lista
            if (l->first == key) {
                l->first = key->next;
                free(key);
                return 1;
            }

            // Percorrer a lista para encontrar o nó anterior ao `key`
            while (atual->next != NULL && atual->next != key) {
                atual = atual->next;
            }

            // Se encontrou o nó antes de `key`
            if (atual->next == key) {
                Node *prov = atual->next;
                atual->next = prov->next;
                free(prov);
                return 1;
            }
        }
    }
    return 0;
}
