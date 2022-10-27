#ifndef LIBRERIAS_H_INCLUDED
#define LIBRERIAS_H_INCLUDED

typedef struct
{
   char nombreApe[40];
    int legajo;
    char materia[40];
   int idMateria;
   int nota;

} registroArchivo;

typedef struct
{
    char nombreApe[40];
    int legajo;
    int nota;
} notaAlumno;

typedef struct _nodo
{
   notaAlumno dato;
   struct _nodo *sig;
} nodo;

typedef struct {
    int idMateria;
    char materia[40];
    nodo * listaDeNotas;
} celda;



#endif // LIBRERIAS_H_INCLUDED
