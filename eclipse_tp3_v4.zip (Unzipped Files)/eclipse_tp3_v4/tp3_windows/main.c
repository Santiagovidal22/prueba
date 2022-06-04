#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Passenger.h"

/****************************************************
    Menu:
     1. Cargar los datos de los pasajeros desde el archivo data.csv (modo texto).
     2. Cargar los datos de los pasajeros desde el archivo data.csv (modo binario).
     3. Alta de pasajero
     4. Modificar datos de pasajero
     5. Baja de pasajero
     6. Listar pasajeros
     7. Ordenar pasajeros
     8. Guardar los datos de los pasajeros en el archivo data.csv (modo texto).
     9. Guardar los datos de los pasajeros en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/



int main()
{
	setbuf(stdout, NULL);
	  int option = 0;



    LinkedList* listaPasajeros = ll_newLinkedList();
    do{
		printf("\nMENU");
		printf("\n1. Cargar los datos de los pasajeros desde el archivo.csv (modo texto).");
		printf("\n2. Cargar los datos de los pasajeros desde el archivo.csv (modo binario).");
		printf("\n3. Alta de pasajero");
		printf("\n4. Modificar datos de pasajero");
		printf("\n5. Baja de pasajero");
		printf("\n6. Listar pasajeros");
		printf("\n7. Ordenar pasajeros");
		printf("\n8. Guardar los datos de los pasajeros desde el archivo.csv (modo texto).");
		printf("\n9. Guardar los datos de los pasajeros desde el archivo.csv (modo binario).");
		printf("\n10. Salir");
		printf("\n\nINGRESE OPCION: ");
		scanf("%d", &option);
		system("cls");
        switch(option)
        {
            case 1:
            	printf("\n1. Cargar los datos de los pasajeros desde el archivo.csv (modo texto).");
                controller_loadFromText("data.csv",listaPasajeros);
                break;
            case 2:
            	printf("\n2. Cargar los datos de los pasajeros desde el archivo.csv (modo binario).");
            	controller_loadFromBinary("data.csv",listaPasajeros);
            	break;
            case 3:
            	printf("\n3. Alta de pasajero");
            	controller_addPassenger(listaPasajeros);
            	break;
            case 4:
            	printf("\n4. Modificar datos de pasajero");
            	controller_editPassenger(listaPasajeros);
            	break;
            case 5:
            	printf("\n5. Baja de pasajero");
            	controller_removePassenger(listaPasajeros);
            	break;
            case 6:
            	printf("\n6. Listar pasajeros");
            	controller_ListPassenger(listaPasajeros);
            	break;
            case 7:
            	printf("\n7. Ordenar pasajeros");
            	controller_sortPassenger(listaPasajeros);
            	break;
            case 8:
            	printf("\n8. Guardar los datos de los pasajeros desde el archivo.csv (modo texto).");
            	controller_saveAsText("data.csv",listaPasajeros);
            	break;
            case 9:
            	printf("\n9. Guardar los datos de los pasajeros desde el archivo.csv (modo binario).");
            	controller_saveAsBinary("data.csv",listaPasajeros);
            	break;
        }
    }while(option != 10);
    return 0;
}

