/* Practica: Estructuras. - Programacion II. Analista Universitario en Sistemas. */

#include <stdio.h>

#define ANTERIOR 1 /* si *t1 es anterior a *t2. */
#define IGUAL 0 /* si *t1 es igual a *t2. */
#define POSTERIOR -1 /* si *t1 es posterior a *t2. */


typedef struct tiempo { 
	int anio, mes, dia, hora, minuto, segundo; 
} Tiempo;



void crear_tiempos(Tiempo *t1, Tiempo *t2);/* Definimos las structs t1 y t2. */

int compara_tiempos(Tiempo *t1, Tiempo *t2);

int main()
{
	Tiempo t1, t2;

	crear_tiempos(&t1, &t2);
	int compara = compara_tiempos(&t1, &t2);
	printf("Año: %d\nMes: %d\nDia: %d\nHora: %d\nMinuto: %d\nSegundo: %d\n", t1.anio, t1.mes, t1.dia, t1.hora, t1.minuto, t1.segundo);
	printf("\n");
	printf("Año: %d\nMes: %d\nDia: %d\nHora: %d\nMinuto: %d\nSegundo: %d\n", t2.anio, t2.mes, t2.dia, t2.hora, t2.minuto, t2.segundo);

	printf("\n");
	printf("%d", compara);

}

void crear_tiempos(Tiempo *t1, Tiempo *t2)
{
	printf("\t-- Tiempo 1 --");
	
	printf("\nIntroduce el anio: ");
	scanf("%d", &t1->anio);
	
	printf("\nIntroduce el mes: ");
	scanf("%d", &t1->mes);
	
	printf("\nIntroduce el dia: ");
	scanf("%d", &t1->dia);

	printf("\nIntroduce el hora: ");
	scanf("%d", &t1->hora);

	printf("\nIntroduce el minuto: ");
	scanf("%d", &t1->minuto);

	printf("\nIntroduce el segundo: ");
	scanf("%d", &t1->segundo);

	printf("\t-- Tiempo 2 --");
	
	printf("\nIntroduce el anio: ");
	scanf("%d", &t2->anio);
	
	printf("\nIntroduce el mes: ");
	scanf("%d", &t2->mes);
	
	printf("\nIntroduce el dia: ");
	scanf("%d", &t2->dia);

	printf("\nIntroduce el hora: ");
	scanf("%d", &t2->hora);

	printf("\nIntroduce el minuto: ");
	scanf("%d", &t2->minuto);

	printf("\nIntroduce el segundo: ");
	scanf("%d", &t2->segundo);
}

int compara_tiempos(Tiempo *t1, Tiempo *t2)
{	/* Nos encargamos del año. */
	if (t1->anio < t2->anio) return ANTERIOR;
	else if (t1->anio > t2->anio) return POSTERIOR;

	if (t1->anio == t2->anio) {
		if (t1->mes == t2->mes) {
			if (t1->dia == t2->dia) {
				if (t1->hora == t2->hora) {
					if (t1->minuto == t2->minuto) {
						if (t1->segundo == t2->segundo) {
							return IGUAL;
						}
					}
				}
			}
		}
	}
}
