#include<stdio.h>
#include<math.h>
#define DATO 4

void main(){
	
	void ejercicio_1(){
		printf("\t\t -----Ejercicio Numero 1-----\n");
		
		int precio;
		int descuento;
		printf("--Ingrese el precio--\n -");
		scanf("%d",&precio);
		
		printf("\n--Ingrese el porcentaje de descuento--\n -");
		scanf("%d",&descuento);
		
		int descuentoTotal = (precio/100)*descuento;
		int  precioFinal = precio-descuentoTotal;
		
		printf("\nPrecio original = %d",precio);
		printf("\nDescuento = %d %s",descuento,"%");
		printf("\nPrecio Final = %d",precioFinal);
	}
	//ejercicio_1();
	
	void ejercicio_2(){
		printf("\t\t -----Ejercicio Numero 2-----\n ");
		
		int ladoA;
		int ladoB;
		printf("\n--Ingrese el lado A--\n -");
		scanf("%d",&ladoA);
		
		printf("\n--Ingrese el lado B--\n -");
		scanf("%d",&ladoB);
		
		int perimetro = (ladoA + ladoB)*2;
		int area = ladoA * ladoB;
		
		printf("\nPerimetro = %d %s",perimetro,"cm");
		printf("\nArea = %d %s",area,"cm Cuadrados");
	}
	//ejercicio_2();
	
	void ejercicio_3(){
		printf("\t\t -----Ejercicio Numero 3-----\n ");
		
		float dolares;
		printf("\n--Ingrese la cantidad de dolares--\n -");
		scanf("%f",&dolares);
		
		float enEuros = dolares * 0.92; 
		
		printf("\n %.2f %s %.2f %s",dolares,"Dolares Coresponden a =", enEuros,"en Euros");
	}
	//ejercicio_3();
	
	void ejercicio_4(){
		printf("\t\t -----Ejercicio Numero 4-----\n ");
		
		float pi = 3.1416;
		float radio;
		printf("\n--Ingrese el radio de la circunferencia--\n -");
		scanf("%f",&radio);
		
		float perimetro = 2 * pi * radio;
		float area = pi * (radio*radio);
		float volumen = (4/3)*pi*(radio*radio*radio);
		
		printf("\nPerimetro = %f %s",perimetro,"cm");
		printf("\nArea = %f %s",area,"cm Cuadrados");
		printf("\nVolumen = %f %s",volumen,"cm Cubicos");
	}
	//ejercicio_4();
	
	void ejercicio_5(){
		printf("\t\t -----Ejercicio Numero 5-----\n ");
		
		int tiempoIngresado;
		int dias = 0;
		int horas = 0;
		int minutos = 0;
		int segundos = 0;
		printf("--Ingrese la cantidad de dias que quiere transformar a Dias/Horas/Minutos/Segundos--\n -");
		scanf("%d",&tiempoIngresado);
		
		while (tiempoIngresado != 0){
			segundos++;
			tiempoIngresado--;
			
			if(segundos == 60){
				minutos++;
				segundos = 0;
			}
			if(minutos == 60){
				horas++;
				minutos = 0;
			}
			if(horas == 24){
				dias++;
				horas = 0;
			}
			
		}
		printf("\nEl tiempo ingresado corresponde a = %d %s %d %s %d %s %d %s",dias,"Dias,",horas,"Horas,",minutos,"Minutos,",segundos,"Segundos,");
		
	}
	//ejercicio_5();
	
	void ejercicio_6(){
		printf("\t\t -----Ejercicio Numero 6-----\n ");
		
		int dias = 0;
		int horas = 0;
		int minutos = 0;
		int segundos = 0;
		int totalSegundos = 0;
		
		printf("--Ingrese la cantidad de Dias--\n -");
		scanf("%d",&dias);
		printf("--Ingrese la cantidad de Horas--\n -");
		scanf("%d",&horas);
		printf("--Ingrese la cantidad de Minutos--\n -");
		scanf("%d",&minutos);
		printf("--Ingrese la cantidad de Segundos--\n -");
		scanf("%d",&segundos);
		
		dias = dias * 24 * 60 * 60;
		horas = horas * 60 * 60;
		minutos = minutos * 60;
		
		totalSegundos = dias + horas + minutos + segundos;
		
		 printf("\n %s %d %s","el tiempo ingresado Corresponde a =",totalSegundos," Segundos");
    }
    //ejercicio_6();
    
    void ejercicio_7(){
    	printf("\t\t -----Ejercicio Numero 7-----\n ");
    	
    	float a;
    	float b;
    	float c;
    	printf("--Ingrese el valor de A\n -");
    	scanf("%f",&a);
    	printf("--Ingrese el valor de B\n -");
    	scanf("%f",&b);
    	printf("--Ingrese el valor de C\n -");
    	scanf("%f",&c);
    	
    	float ecuacion;
    	ecuacion = sqrt((b * b)-(4 * a *c));
    	float valor1 = (-b + ecuacion)/(2 * a);
    	float valor2 = (-b - ecuacion)/(2 * a);
    	
    	printf("\nPrimer valor = %.2f",valor1);
    	printf("\nSegundo valor = %.2f",valor2);
	}
	//ejercicio_7();
	
	void ejercicio_8(){
		printf("\t\t -----Ejercicio Numero 8-----\n ");
		
		float resistencia1;
		float resistencia2;
		float resistenciaEquivalente;
		
		printf("--Ingrese la Resistencia Numero 1\n -");
		scanf("%f",&resistencia1);
		printf("--Ingrese la Resistencia Numero 2\n -");
		scanf("%f",&resistencia2);
		
		resistenciaEquivalente = (resistencia1 * resistencia2)/(resistencia1 + resistencia2);
		
		printf("\nResistencia equivalente = %.2f",resistenciaEquivalente);
	}
	//ejercicio_8();
	void ejercicio_9(){
		printf("\t\t -----Ejercicio Numero 9-----\n ");
		
		int numero1;
		int numero2;
		int numero3;
		int numero4;
		printf("--Ingrese el primer digito--\n -");
		scanf("%d",&numero1);
		printf("--Ingrese el segundo digito--\n -");
		scanf("%d",&numero2);
		printf("--Ingrese el tercer digito--\n -");
		scanf("%d",&numero3);
		printf("--Ingrese el cuarto digito--\n -");
		scanf("%d",&numero4);
		
		float media = (float)((numero1 + numero2 + numero3 + numero4)/4);
		
		printf("\nLa media es = %.2f",media);
	}
	//ejercicio_9();
	
	void ejercicio_10(){
		printf("\t\t -----Ejercicio Numero 10-----\n ");
		int x = 2; 
		int y = 6; 
		int z = 4; 
		
		y = y+4*z; 
		y +=x;
		printf("%d",y);
	}
	//ejercicio_10();
	
	void ejercicio_11(){
		printf("\t\t -----Ejercicio Numero 11-----\n ");
		int x = 2;
		int y = 6;
		
		if ((x < y && x != y)||(x==y)){
			printf("Verdadero");
		}else{
			printf("falso");
		}
	}
	//ejercicio_11();
	
	void ejercicio_12(){
		printf("\t\t -----Ejercicio Numero 12-----\n ");
		
		int x;
		int y = 1;
		float z;
		x = 3/2+10-3;
		z = 3/2+10-3;
		
		printf("%d -- %f\n",x,z);
		printf("%d\n",DATO*3+1/2);
		printf ("%d\n", 5+2-1>5);
		printf ("%d\n", 3>1 || DATO*2<1); 
		printf ("%d\n", 5!=1 && DATO>2); 
		y=x;
		printf ("%d\n", x+y<=z);

	}
	//ejercicio_12();
	
	void ejercicio_13(){
		printf("\t\t -----Ejercicio Numero 13-----\n ");
		
		char codigo [6] ;
		int precio;
		int cantidad;
		int descuento;
		
		printf("--Ingrese el codigo de el preoducto--\n -");
		scanf("%s",&codigo);
		printf("--Ingrese el precio de el producto--\n -");
		scanf("%d",&precio);
		printf("--Ingrese la cantidad--\n -");
		scanf("%d",&cantidad);
		printf("--Ingrese el descuento que sera aplicado--\n -");
		scanf("%d",&descuento);
		
		int precioXcantidad = precio*cantidad;
		int descuentoEnTotal = (precioXcantidad/100)*descuento;
		int ivaTotal = (precioXcantidad/100)*19;
		int total = precioXcantidad + ivaTotal - descuentoEnTotal;
		
		
		printf("%s %s %s %d","\ncodigo =",codigo,"\t precio =",precio);
		printf("%s %d %s %d","\nCantidad =",cantidad,"\t Precio total =",precioXcantidad);
		printf("%s %d %s %d","\nporcentaje descuento =",descuento,"%\t Descuento =",descuentoEnTotal);
		printf("%s %s %d","\n19% IVA","\t 19% precio total sin descuento =",ivaTotal);
		printf("%s %s %d","\nTotal","\t",total);
	}
	ejercicio_13();
			
}


