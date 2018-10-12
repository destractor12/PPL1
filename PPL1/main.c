#include <stdio.h>
#include <stdlib.h>
#include "automoviles.h"
#define TAM 20
#define TAM2 20

int main()
{
    ePropietario usuarios[TAM];
    eAutomovil autos[TAM2];
    inicializarEstados(usuarios, TAM);
    inicializarEstadosAutomovil(autos,TAM2);
    int indice;
    int opcion;
    int flag=cargarHarcodePropietario(usuarios, TAM);


    do
    {
        opcion = mostrarMenu();
        fflush(stdin);


        switch(opcion)
        {


        case 1:
            system("cls");
            agregarPersona(usuarios,TAM);
            flag=1;
            break;

        case 2:
            modificarPropietario(usuarios,TAM,flag);
            break;

        case 3:
            borrarPersona(usuarios,flag,TAM);
            break;

        case 4:
            mostrarListaPropietario(usuarios, TAM,flag);
            break;

        case 5:
            indice=buscarLibreAutomovil(autos, TAM2);
            altaAutomovil(autos,usuarios,TAM2,TAM,indice,flag);
            break;
        case 9:
            opcion=7;
            break;
        case 7:
            break;
        }
        printf("\n");
        system("pause");
        system("cls");
    }
    while(opcion!=7);

    return 0;
}
