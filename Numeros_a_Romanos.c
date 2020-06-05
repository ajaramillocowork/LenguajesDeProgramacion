#include <stdio.h>

char letras[]={'M','D','C','L','X','V','I'};
int numeros[]={1000,500,100,50,10,5,1};
 
void main(){
	int numero;
	printf("\n------Ingrese el numero------\n -> ");
	scanf("%d",&numero);
	TransF(numero);
}
void TransF(int numero){
	
	int i;
	for(i=0 ; i<7;){
		if(numero >= numeros[i]){
			printf("%c",letras[i]);
			numero -= numeros[i];
		}
		if (numero < numeros[i]){
			i++;
		}
	}
}
