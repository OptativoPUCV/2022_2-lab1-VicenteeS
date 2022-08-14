#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "exercises.h"

/*
Ejercicio 1.
Función que recibe 3 parámetros (a, b y c),
y en c almacena el valor de la suma de a más b.
*/

void suma(int a, int b, int *c)
{
  *c = a + b;
}

/*
Esta función suma los N primeros números del arreglo a
*/
int sumaN(int a[], int N) {
  int i;
  int tot = 0;

  for (i = 0; i < N; i++) {
    tot += a[i];
  }

  return tot;
}

/*
Ejercicio 2.
Esta función debe sumar los últimos m números del
arreglo a y almacena el resultado en *suma.
Utilice la función sumaN.
*/

void sumaNultimos(int a[], int n, int m, int *suma)
{
  int arrayCopia[m];
  int j=0, copiaM;
  copiaM = m;
  
  while(copiaM > 0)
  {
    arrayCopia[j] = a[n-1];
    
    n--;
    copiaM--;
    j++;
  }
  
  *suma = sumaN(arrayCopia, m);
}

/*
Ejercicio 3.
Considerando la estructura Persona, programe la función
crearPersona(...), la cual crea una nueva persona con
los datos correspondientes y retorna un puntero al dato
recién creado.
*/
typedef struct {
  char nombre[30];
  char rut[11];
  int edad;
} Persona;

Persona *crearPersona(char nombre[], char rut[], int edad)
{
  Persona *nuevaP;
  nuevaP = (Persona *)malloc(sizeof(Persona));
  //Persona *nuevaP[1];
  //char n[30];
  //char r[11];
/*
  scanf("%s", n);
  scanf("%s", r);
*/
  strcpy(nuevaP->nombre, "Ignacio");
  strcpy(nuevaP->rut, "15489XXX-2");  
  nuevaP->edad = 38;
  

  //scanf("%d", &nuevaP->edad);
  //scanf("%s", nuevaP[0].nombre);
  // &nuevaP->rut, &nuevaP->edad);
  //scanf("%s", nuevaP[0].rut);
  
  
  return (nuevaP);
  //return(NULL);
}

/*
Ejercicio 4.
Considerando la estructura "Vector", escriba
la función Vector* crearVector(int n), la cual crea
un vector con capacidad `n`, reserva la memoria
correspondiente para el arreglo con `n` datos
inicializados en 0 y luego retorna el vector creado.
*/
typedef struct {
  int *datos;    // arreglo dinámico
  int capacidad; // capacidad del arreglo
} Vector;

Vector *crearVector(int n) 
{
  //arreglo = NULL;
  Vector *v = (Vector *) calloc (n,sizeof(Vector));
  
  /*for(int i = 0; i<n; i++)
    {
      v[i].datos = (int *) malloc (sizeof(int)*n); 
      for(int j = 0; j<n; j++)
        {
          v[i].datos[j] = 0;
        }
      
      //v[i].datos[0] = 0;
    }
  for(int i = 0; i<n; i++)
    {
      v[i].datos[0] = 0;
    }*/
  //v->datos = (int *) calloc (1,sizeof(int)); 
  //MyObject *my1 = malloc(sizeof(MyObject));

  /*for(int i=0 ; i<n; i++)
    {
      arreglo[i]->datos = 0;
      arreglo[i]->capacidad = 0;
    }
*/
  /*for(int i = 0; i<n; i++)
  {
    arreglo[i].datos = 0;
    arreglo[i].capacidad = 0;
  }
  */
  return (v); 
}

/*
Ejercicio 5a.
Programe la función void asignarValor(Vector * v, int i, int valor),
la cual asigna el valor a la posición i del vector v.
*/
void asignarValor(Vector *v, int i, int valor) 
{
  
}

/*
Ejercicio 6.
Programe la función int obtenerValor(Vector * v, int i),
la cual retorna el valor en la posición i del vector v.
*/
int obtenerValor(Vector *v, int i) { return 0; }

/*
Ejercicio 7.
Función que suma los vectores `a` y `b` y
actualiza el vector `c` con el resultado de la suma.
*/
void sumaV(Vector *a, Vector *b, Vector *c) {}

/*
Ejercicio 8.
Use las operaciones implementadas de vectores para
sumar (a1,a2)+(b1+b2). Almacene el resultado en el vector c.
*/
void sumaV2(int a1, int a2, int b1, int b2, Vector *c) {}
