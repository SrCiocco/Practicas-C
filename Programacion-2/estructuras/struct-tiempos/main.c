/* Practica: Estructuras. - Programacion II. Analista Universitario en Sistemas. */

#include <stdio.h>

#define ANTERIOR 1 /* si *t1 es anterior a *t2. */
#define IGUAL 0 /* si *t1 es igual a *t2. */
#define POSTERIOR -1 /* si *t1 es posterior a *t2. */


typedef struct tiempo { 
	int anio, mes, dia, hora, minuto, segundo; 
} Tiempo;



void crear_tiempo(Tiempo *t); /* Definimos las structs t1 y t2. */

int compara_tiempos(Tiempo *t1, Tiempo *t2);

void imprime_tiempo(Tiempo t);

int main()
{
	Tiempo t1, t2;

	printf("\t -- Tiempo 1 --\n");
	crear_tiempo(&t1);

	printf("\t -- Tiempo 2 --\n");
	crear_tiempo(&t2);

	int compara = compara_tiempos(&t1, &t2);
	
	printf("\n");

	imprime_tiempo(t1);

	imprime_tiempo(t2);

	printf("\n");

	if (compara == ANTERIOR) {
		printf("Tiempo 1 es anterior a Tiempo 2.\n");

	} else if (compara == POSTERIOR) {
		printf("Tiempo 1 es posterior a Tiempo 2.\n");

	} else {
		printf("Tiempo 1 es igual a Tiempo 2\n");
	}

	return 0;
}

void crear_tiempo(Tiempo *t)
{
	printf("\nIntroduce el anio: ");
	scanf("%d", &t->anio);
	
	printf("\nIntroduce el mes: ");
	scanf("%d", &t->mes);
	
	printf("\nIntroduce el dia: ");
	scanf("%d", &t->dia);

	printf("\nIntroduce la hora: ");
	scanf("%d", &t->hora);

	printf("\nIntroduce el minuto: ");
	scanf("%d", &t->minuto);

	printf("\nIntroduce el segundo: ");
	scanf("%d", &t->segundo);
}

int compara_tiempos(Tiempo *t1, Tiempo *t2)
{
	if (t1->anio != t2->anio)
		return (t1->anio < t2->anio) ? ANTERIOR : POSTERIOR;

	if (t1->mes != t2->mes)
		return (t1->mes < t2->mes) ? ANTERIOR : POSTERIOR;

	if (t1->dia != t2->dia) 
		return (t1->dia < t2->dia) ? ANTERIOR : POSTERIOR;

	if (t1->hora != t2->hora) 
		return (t1->hora < t2->hora) ? ANTERIOR : POSTERIOR;

	if (t1->minuto != t2->minuto) 
		return (t1->minuto < t2->minuto) ? ANTERIOR : POSTERIOR;

	if (t1->segundo != t2->segundo) 
		return (t1->segundo < t2->segundo) ? ANTERIOR : POSTERIOR;

	return IGUAL;
}

void imprime_tiempo(Tiempo t)
{
	printf("%d/%d/%d %d:%d:%d\n", t.dia, t.mes, t.anio, t.hora, t.minuto, t.segundo);
}
