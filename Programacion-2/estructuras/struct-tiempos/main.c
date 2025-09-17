/* Practica: Estructuras. - Programacion II. Analista Universitario en Sistemas. */

#include <stdio.h>

#define ANTERIOR 1 /* si *t1 es anterior a *t2. */
#define IGUAL 0 /* si *t1 es igual a *t2. */
#define POSTERIOR -1 /* si *t1 es posterior a *t2. */


typedef struct tiempo { 
	int anio, mes, dia, hora, minuto, segundo; 
} Tiempo;



void crear_tiempos(Tiempo *t1/*, Tiempo *t2*/); /* Definimos las structs t1 y t2. */

int compara_tiempos(Tiempo *t1, Tiempo *t2);

int main()
{
	Tiempo t1, t2;

	crear_tiempos(&t1/*, &t2*/);

	printf("Año: %d\nMes: %d\nDia: %d\nHora: %d\nMinuto: %d\nSegundo: %d\n", t1.anio, t1.mes, t1.dia, t1.hora, t1.minuto, t1.segundo);
}

void crear_tiempos(Tiempo *t1/*, Tiempo *t2*/)
{
	t1->anio = 2004;
	t1->mes = 3;
	t1->dia = 30;
	t1->hora = 6;
	t1->minuto = 30;
	t1->segundo = 15;
}
