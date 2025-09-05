// Registro de estudiantes y calculo de promedios.

#include <stdio.h>

#define TAMAÑO_NOMBRE 20
#define TAMAÑO_NOTAS 5

void registrar_estudiante(char e[]);
void cargar_notas(float n[]);
float calcular_promedio(float n[]);
void mostrar_promedio(float p, char e []);

int main() {
    char nombre[TAMAÑO_NOMBRE];
    float notas[TAMAÑO_NOTAS];
    float promedio;

    registrar_estudiante(nombre);
    cargar_notas(notas);
    promedio = calcular_promedio(notas);
    mostrar_promedio(promedio, nombre);

    return 0;
}

void registrar_estudiante(char e[]){
    printf("Carga tu nombre completo: ");
    scanf("%s", e);
}

void cargar_notas(float n[]) {
    printf("\nPor favor, introduce 5 notas: ");
    for(int i = 0; i < TAMAÑO_NOTAS; i++){
        scanf("%f", &n[i]);
    }
}

float calcular_promedio(float n[]){
    float suma = 0;

    for(int i = 0; i < TAMAÑO_NOTAS; i++){
        suma += n[i];
    }
    
    float promedio = suma / TAMAÑO_NOTAS;

    return promedio;
}

void mostrar_promedio(float p, char e[]){
    printf("\n%s, Su promedio es: %.2f", e, p);
}
