#include <stdio.h>



int main(){
	
int i =0  ,numer[10],soma,qtdpar =0,qtdimp =0,par[10],imp[10],sair = 0;
//for ( i =0  ; i<10 ; i++){
//while(i < 10 && !sair) {
	do {
	printf("digite o %d numero :",i);
	scanf("%d",&numer[i]);
	
	if (numer[i] >= 0) {
	if (numer[i] %2 == 0 ) {
		par[qtdpar] = numer[i];
		qtdpar++;
	}
	else
	{
		imp[qtdimp] = numer[i];
		qtdimp++;	
	}
	i++;
	}
	else
	{
		sair = 1;
	}	
} while(i < 10 && !sair);

printf("numeros Pares que voce digitou:\n");	
i = 0;
while( i <qtdpar)
{
	printf("%d \n",par[i]);
	i++;
} 
i = 0;
printf("numeros Impares que voce digitou:\n");
while( i <qtdimp)
{
	printf("%d \n",imp[i]);
	i++;
}
printf("\n");
printf("a quantidade de numeros impares e : %d\n",qtdimp);
printf("a quantidade de numeros pares e : %d\n",qtdpar);
}