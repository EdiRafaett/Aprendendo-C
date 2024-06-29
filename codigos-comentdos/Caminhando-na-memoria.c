//Caminhando na memória:
#include <stdio.h>

int main() {
unsigned int x;
x = 3;
unsigned char *px;
px = &x; //px recebe o endereço de início de x 

//-------------------MOSTRAR 257:--------------------------
*px = 1; // O conteúdo do byte zero recebe 1
*(px+1) = 1; //O conteúdo do byte 1 recebe 1
printf("%d\n", *px); // Mostra o valor do byte 0
printf("%d\n", *(px+1)); // Mostra o valor do byte 1
printf("Valor de X = %d\n", x); //Mostra o valor de X (valor 1 no byte zero e valor 1 no byte um)

    return 0;
}
//ANOTAÇÕES:
// Ao ter um ponteiro para int, por exemplo, incrementar esse ponteiro em 1 faz com que ele "salte" 4 bytes na memória.