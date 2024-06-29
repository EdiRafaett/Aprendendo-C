#include <stdio.h>

void troca(int *a, int *b){ //Recebendo os endereços de x e y
    int tmp;
    printf("Valores recebidos na função troca:\n");
    printf("a = %d; b = %d\n", *a, *b);
    tmp = *a; //tmp recebe o conteúdo de a
    *a = *b; //a recebe o conteúdo de b
    *b = tmp;//b recebe o conteúdop de tmp
    printf("Troca realizada pela função:\n");
    printf("a = %d; b = %d\n", *a, *b);
    
}

int main(void){
    int x = 3, y = 4;
    printf("Valores recebidos na main:\n");
    printf("x = %d; y = %d\n", x, y);
    troca(&x, &y); //Passando os endereços de memória de x e y
     printf("Valores após tratamento na função:\n");
    printf("x = %d; y = %d\n", x, y);
    return 0;
}
//Sem usar ponteiros o que é passado para a função troca é uma cópia do que está escrito na variável x e variáveel y e não o endereço onde esses valores estão gravados. Dessa maneira a troca não é feita na função principal//
//PONTEIROS:
//Ponteiros guardam endereços da memória onde determinada variável é guardada.
//O ponteiro tem um tipo associado que deve ser o mesmo da variável ao qual esse ponteiro vai guardar o endereço.
// tipo *nome_ponteiro
// & (adress aperator) = recupera o endereço de uma variável para que possa ser passado para um ponteiro, por exemplo.
//*(dereference operator) = Quando colocado antes de um ponteiro já criado recupera o conteúdo do endereço armazenado dentro do ponteiro (indica que refere-se ao dado armazenado na posição e não o endereço)
// %p = caractere de formato que mostra o endereço que um determinado ponteiro armazena no printf, por exemplo
//MODIFICANDO O VALOR ARMAZENADO EM UM PONTEIRO:
/*
int x, px = &x;
*px = 3; x recebe o valor 3
*px = *px + 1; x recebe o valor 4
(*px)--; x retorna o valor 3
*/