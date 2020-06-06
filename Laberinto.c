#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int Filas = 5, Columnas = 5;
char Mapa[5][5];
int posicion_personaje_X;
int posicion_personaje_y;
const int personaje = 9;
int Final = 3;
char dejarRastro= 8;
int vidas = 3;


void llenarArreglo(){
	int i,j;
	srand(time(NULL));//para que cada vez se llene de manera diferente
	for( i=0; i<Filas; i++){
		for( j=0; j<Columnas;j++){
			//para que en la coordenada 0.0 aparesca un 3
			if(i== 0 && j == 0){
				Mapa[i][j] = Final;
				
			}else{
            	int numeroRandom = rand()%2;//llenado de matriz de forma "aleatoria"
            	Mapa[i][j] = numeroRandom;
            }
            //para que aparesca un 9 en la coordenada 4.4
            if(i==4 && j==4){
                Mapa[i][j] = personaje;
                posicion_personaje_X = i;
                posicion_personaje_y = j;
			}	
		}
	}
}

void mostrarArreglo(){
	int i,j;
	for(i=0; i<Filas; i++){
		printf("\n \n \n");
		for(j=0; j<Filas; j++){
			
			printf("    %d     ",Mapa[i][j]);
			
		}
	}
}

void movimientos(){
	printf("\n -> Controles A,W,S,D <-");
	char letra;	
	letra = toupper(getch()) ;
  	if(letra == 'A' || letra == 'W' || letra == 'D' || letra == 'S'){
    	switch(letra){
      		case 'W':
      			if(posicion_personaje_X == 0){
      				break;
				  }else{
				  	if(Mapa[posicion_personaje_X-1][posicion_personaje_y]==1){
				  		vidas--;
					  }
				  	Mapa[posicion_personaje_X-1][posicion_personaje_y] = personaje;
				  	Mapa[posicion_personaje_X][posicion_personaje_y] = dejarRastro;
				  	posicion_personaje_X--;
				  }
				  break;
				  
			case 'S':
      			if(posicion_personaje_X == 4){
      				break;
				  }else{
				  	if(Mapa[posicion_personaje_X+1][posicion_personaje_y]==1){
				  		vidas--;
					  }
				  	Mapa[posicion_personaje_X+1][posicion_personaje_y] = personaje;
				  	Mapa[posicion_personaje_X][posicion_personaje_y] = dejarRastro;
				  	posicion_personaje_X++;
				  }
				  break;
			
			case 'A':
      			if(posicion_personaje_y == 0){
      				break;
				  }else{
				  	if(Mapa[posicion_personaje_X][posicion_personaje_y-1]==1){
				  		vidas--;
					  }
				  	Mapa[posicion_personaje_X][posicion_personaje_y-1] = personaje;
				  	Mapa[posicion_personaje_X][posicion_personaje_y] = dejarRastro;
				  	posicion_personaje_y--;
				  }
				  break;
			case 'D':
      			if(posicion_personaje_X == 4){
      				break;
				  }else{
				  	if(Mapa[posicion_personaje_X][posicion_personaje_y+1]==1){
				  		vidas--;
					  }
				  	Mapa[posicion_personaje_X][posicion_personaje_y+1] = personaje;
				  	Mapa[posicion_personaje_X][posicion_personaje_y] = dejarRastro;
				  	posicion_personaje_y--;
				  }
				  break;
			
		}
	}
}

void main(){

	llenarArreglo();
	
	do{
		system("cls");
		mostrarArreglo();
		movimientos();
	}while(vidas !=0 && (Mapa[0][0] != personaje));
	if(vidas==0){
		printf("\n--------------------------------");
		printf("\n------------Perdiste------------");
		printf("\n--------------------------------");
	}else{
		printf("\n--------------------------------");
		printf("\n------------Ganaste-------------");
		printf("\n--------------------------------");
	}
	

}
