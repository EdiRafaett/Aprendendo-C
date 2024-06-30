/* QUESTÃO 1: */

#include <stdio.h>

int main(){
    int i =3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;
    //. p == &i;
    printf("Endereço para o qual p aponta: %p\n", p);
    printf("Endereço de i: %p\n", &i);
    //p aponta para i, ou seja, p guarda o endereço de i
    
    //. *p - *q;
    printf("valor da subtração de *p - *q: %d\n", *p - *q);
    // O valor guardado no endereço para o qual p aponta menos o  valor guardado no endereço para o qual q aponta
    //. **&p;
    printf("valor de **&p: %d\n", **&p);
    // O valor guardado no endereço para o qual p aponta
    
    //. 3 - *p/(*q) + 7;
    printf("resultado: %d\n",(3 - *p/(*q)+7));
    // valor guardado em p (3) dividido pelo valor guardado em q (5) dá zero, então a expressão fica 3 - 0 + 7 = 10
    return 0;

}