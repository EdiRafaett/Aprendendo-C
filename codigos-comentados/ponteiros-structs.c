#include <stdio.h>
#include <stdlib.h>

struct cliente{
    int id;
    char nome[400];
    int fone;

};

int main(){
    struct cliente jose, *pc;
    pc = &jose; // O ponteiro recebe o endereço de memória onde ficarão as informações de José
    pc -> id = 14394; // No endereço de memória de José está sendo recebido o id (pc -> id = (*pc).id')
    printf("id= %d\n", pc->id);
    printf("Digite o telefone : ");
    scanf("%d", pc->fone);
    printf("fone= %d\n", pc->fone);
    
    return 0;
}
