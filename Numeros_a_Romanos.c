#include <stdio.h>

char *letras[]={"M","DM","DCCC","DCC","DC","D","CD","CCC","CC","C","XC","LXXX","LXX","LX","L","XL","XXX","XX","X","IX","VIII","VII","VI","V","IV","III","II","I"};
int numeros[]={1000,900,800,700,600,500,400,300,200,100,90,80,70,60,50,40,30,20,10,9,8,7,6,5,4,3,2,1};
 
void main(){
	int numero;
	for(;;){
		printf("\n------Ingrese el numero que desea transformar a Romanos------\n -> ");
		scanf("%d",&numero);
		if (numero >= 4000 || numero <=0){
			printf("\n\n----El numero que usted a ingresado previamente no pude ser procesado----\n\n");
		}else{
			TransF(numero);
		}
	}
}
void TransF(int numero){
	
	int i;
	for(i=0 ; i<28;){
		if(numero >= numeros[i]){
			printf("%s",letras[i]);
			numero -= numeros[i];
		}
		if (numero < numeros[i]){
			i++;
		}
	}
}
