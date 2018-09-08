#include <stdio.h>

#define X 10
#define Y 25

void iniciar(int s[X][Y]);
void imprimir(int s[X][Y]);
void ocupar(int s[X][Y]);
void menu();


void main(){
	int cine[X][Y];
	int opcion;
	
	do{
		menu();
		scanf("%d", &opcion);
		switch(opcion){
			
			case 1:
			iniciar(sala);
			break;
			
			case 2:
			imprimir(sala);
			break;
			
			case 3:
			ocupar(sala)
			break;
			
			
			case 0: break;
			default:
				printf("\nNo ha introducido una opcion valida..\n");
			}
		}while(opcion != 0);
	}
	
	void menu(){
		intf("\nPulse la opcion que desea o 0 para salir....\n");
		intf("1. Iniciar Sala");
		intf("2. Imprimir la ocupacion de la sala\n");
		intf("3. Ocupar un asiento\n");
		intf("0. Salir\n");
		intf("Elige una opcion: ");
		}
		
	void iniciar(){
		int i,j;
		
		for(i=0;i 9){
				printf(" X ");
				else
				printf("X ");
				ocupada++;
				ocupadaTotal++;
			
			}else{
				if(j >9){
					printf(" . ");
					else
					printf(". ");
					libres++;libretotal++;
					
					}
				
				}
				printf(" -> Libres %d / Ocupadas %d, libres, ocupada");
				libres=0;
				ocupada=0;
		
		}
		printf("\nTotal asientos ocupados: %d \t Total asientos libres: %d\n", ocupadototal, libretotal);
	
}
	
	}
