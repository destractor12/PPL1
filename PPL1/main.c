#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define TAM 20

int main()
{
    ePropietario usuarios[TAM];
    inicializarEstados(usuarios, TAM);
    int opcion;
    int flag=0;

     do
    {
        opcion = mostrarMenu();



        switch(opcion)
        {
            cargarHarcodePropietario(usuarios, TAM);

            case 1:agregarPersona(usuarios,TAM);
            flag=1;
            break;

            case 2:modificarPropietario(usuarios,TAM,flag);
            break;

            case 3:borrarPersona(usuarios,flag,TAM);
            break;

            case 4:mostrarLista(usuarios, TAM);
            break;

            case 5: opcion=5;
            break;
        }

    }while(opcion!=5);

    return 0;
}
