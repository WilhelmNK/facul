#include <stdio.h>
#include <string.h>
#define TAMNOM 50
#define QTDCLI 60
typedef struct 
{
	int codigo;
	char nome[TAMNOM];
	int idade;
}tcliente ;



tcliente vetCliente[QTDCLI];

void pausa(char msg[]) {
	printf (msg);
	char c;
	fflush(stdin);
	c = getchar();
}
int fcmenu(){
int op = 0;
	system("clear");
printf("Escolha uma Opcao\n");
printf("1 - incluir\n");
printf("2 - excluir\n");
printf("0 - sair\n");
scanf("%d", &op);
return{op};
}fcmenu

int main(){
int i = 0;
int cod = 0;
int menos = -1;
char msg[2*TAMNOM];
int achei = 0;
int l = 0;

//comeca	
do {
	
fcmenu();
switch ( fcmenu() )
{
	case 0:
	break;
case 1:
	if ( i < QTDCLI)
	{
	pausa("Opcao - Inserir");
	printf("Digite o Nome do cliente %d : ", i+1);
	scanf("%s", vetCliente[i].nome);
	printf("Digite a Idade do cliente:");
	scanf("%d", vetCliente[i].idade);
	vetCliente[i].codigo = i+1;
	i++;
	} else pausa("quantidade maxima de clientes alcancadas");
	
    break;
case 2:
    printf("2");
	pausa("Opcao - Remover");
	printf("digite o codigo do cliente que voce quer remover");
	scanf("%d", &cod);
	if (cod > 0 || cod < i)
	{

		while ( !achei && l < i)
		{			
		if (vetCliente[l].codigo == cod)
		{
			vetCliente[l].codigo = -1;
			achei = 1;
		}
			l++;
		}
		strcpy (msg,"removido o cliente");
		strcat(msg,vetCliente[l-1].nome);
		if(achei) pausa(msg);
		else pausa("cliente nao encontrado");
	}
    break;

case 3:
printf("Lista de clientes\n");
 l=0;
 while (l < i)
 {
	if (vetCliente[l].codigo > 0)
	{
		printf("codigo : %d", vetCliente[l].codigo);
		printf("Nome : %d", vetCliente[l].nome);
		printf("Idade : %d", vetCliente[l].idade);
	}
	l++;
	
 }
 pausa("\nfim da lista\n");
break;
default:
	pausa("opção invalida");
}
}while(op != 0);
 
}//main
