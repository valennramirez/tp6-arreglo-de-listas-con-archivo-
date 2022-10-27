#include <stdio.h>
#include <stdlib.h>
#include "librerias.h"

int main()
{
    //cargarArchivo("archivos.bin");

    printf ("Registros cargados en el archivo: \n\n");

    mostrarArchivoRegistros("archivos.bin");

    celda adl[10];

    int validos=pasarDeArchivoToADL(adl, 10, "archivos.bin");

    printf ("Arreglo de listas: \n\n");

    mostrarADL(adl);

    //pasarDeADLToArchivoDeAprobados("aprobados.bin", adl, validos);

    //printf ("Archivo con alumnos con nota igual o mayor a 6: \n\n");
    //mostrarArchivoNotas("aprobados.bin");


    return 0;
}
