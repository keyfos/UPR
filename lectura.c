#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <math.h>

typedef struct {
int tipo_origen ;
int numero_origen ;
int salida_origen;
int tipo_destino;
float numero_destino ;
int entrada_destino;
float objeto_entrada;
}datos_netlist;

datos_netlist *aux;
void suma(datos_netlist *aux);
int main(void){
	int i;
	FILE *netlist;
	netlist = fopen("NET_2.txt", "r");
	datos_netlist *aux = malloc(sizeof(datos_netlist));
	if (netlist==NULL) {
        fputs("File error", stderr); exit(1) /*para salir del programa*/;}
    for (i=0; !feof(netlist); i++){
    	fscanf(netlist, "%x %f \n", &aux->entrada_destino, &aux->numero_destino);
    	printf("tipo: %x, numero: %f \n", aux->entrada_destino, aux->numero_destino);
	//printf("tipo: %x, numero: %x \n", aux->entrada_destino, aux->numero_destino);
	
	}
//	aux->objeto_entrada = aux->entrada_destino + aux->numero_destino;
//	printf("La suma es: %f", aux->objeto_entrada);
	suma(aux);
	fclose(netlist);
	return (0);
}
void suma(datos_netlist *aux){
	aux->objeto_entrada = aux->entrada_destino + aux->numero_destino;
	printf("La suma es: %f", aux->objeto_entrada);
}
