#include <stdio.h>
#define TAM 60
typedef struct 
{
	char nome[50];
	int idade;
}tcliente ;



tcliente vetCliente[TAM];

void pausa() {
	char c;
	fflush(stdin);
	c = getchar();
}


int main(){
int op = 0;
do {
printf("Escolha uma Opcao\n");
printf("1 - incluir\n");
printf("2 - excluir\n");
printf("0 - sair\n");
scanf("%d", &op);

switch ( op )
{
case 1:
    printf("pipi");
    break;
case 2:
    printf("duo");
    break;
default:
    printf("Opcao invalida");
	pausa();
}



}while(op != 0);
 
}//main