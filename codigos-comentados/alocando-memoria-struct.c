//Acessando structs com ponteiros 

#include <stdio.h>
#include <stdlib.h>

struct cliente{
    int id;
    char nome[400];
    int fone;

};

int main(){
    struct cliente *pc;
    pc = malloc(10*sizeof(struct cliente)); //pc aponta para um bloco de memória que alocará 10 clientes.
    pc[1].id = 14394; //pc[1], 1 é o local de memória do cliente, acessa o valor que altera o id.
    printf("id= %d\n", pc[1].id); // Imprime o id do cliente 1.
    free(pc);
    return 0;
}
