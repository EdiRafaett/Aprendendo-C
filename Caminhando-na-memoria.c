//Caminhando na memória:
#include <stdio.h>

int main() {
unsigned int x;
x = 3;
unsigned char *px;
px = &x; //px recebe o endereço de início de x 
px = px+1; //px caminha na memória em 1 byte
printf("%d\n", *px); // Mostra o valor do byte 1
    return 0;
}
//ANOTAÇÕES:
// Ao ter um ponteiro para int, por exemplo, incrementar esse ponteiro em 1 faz com que ele "salte" 4 bytes na memória.
// PAREI EM 13:00 VIDEO 2