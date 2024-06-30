/*QUESTÃO 2:*/

#include <stdio.h>

int main(){
    int i = 5, *p;
    p = &i;
    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
    // p aponta para o endereo de i
    // p+1 apontada para o endereço de i + 1
    // *p+2 soma dois ao valor guardado no endereço para o qual p aponta
    // **&p valor guardado no endereço para o qual p aponta
    // 3**p 3 vezes o valor guardado no endereço para o qual p aponta
    // soma 4 ao valor guardado no endereço para o qual p aponta
    return 0;
}