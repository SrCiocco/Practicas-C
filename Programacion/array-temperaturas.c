/*

🧠 Ejercicio: Registro de temperaturas
Se desea desarrollar un programa en C que permita registrar y analizar las
temperaturas diarias de una semana.

Requisitos:
Definí una constante con #define llamada DIAS_SEMANA con el valor 7.
Usá un array para guardar las temperaturas (tipo float) de cada día de la
semana. Implementá funciones para: Cargar las temperaturas (usando punteros).
Calcular el promedio semanal de temperaturas.
Obtener la temperatura más alta y más baja.
Mostrar los valores cargados.

Utilizá las siguientes bibliotecas clásicas:

<stdio.h> para entrada/salida.
<stdlib.h> si necesitás funciones auxiliares.

🔍 Objetivo del programa:
Al ejecutarlo, el usuario debe ingresar 7 temperaturas. Luego, el programa debe:
Mostrar todas las temperaturas ingresadas.
Mostrar el promedio.
Mostrar la temperatura máxima y mínima.

*/

#include <stdio.h>

#define DIAS_SEMANA 7

void cargarTemp(float t[]);
void mostrarValores(float t[], float tmax, float tmin, float promedio);

float calcularProm(float t[]);
float obtenerTempMax(float t[]);
float obtenerTempMin(float t[]);



int main () {
    float array_temp[DIAS_SEMANA];
    float promedio, tmax, tmin;

    cargarTemp(array_temp);
    promedio = calcularProm(array_temp);
    tmax = obtenerTempMax(array_temp);
    tmin = obtenerTempMin(array_temp);

    mostrarValores(array_temp, tmax, tmin, promedio);
    return 0;
}
void cargarTemp(float t[]) {
    printf("Por favor, ingresa 7 temperaturas.\n");
    for (int i = 0; i < DIAS_SEMANA; i++) {
        scanf("%f", &t[i]);
    }
}

float calcularProm(float t[]) {
    float acumulador = 0;
    for (int i = 0; i < DIAS_SEMANA; i++) {
        acumulador += t[i];
    }
    return acumulador / DIAS_SEMANA; // Promedio = suma de valores / cantidad de valores
}

float obtenerTempMax(float t[]) {
    float temp_max = t[0];
    for (int i = 1; i < DIAS_SEMANA; i++) {
        if (t[i] > temp_max) {
            temp_max = t[i];
        }
    }
    return temp_max;
}

float obtenerTempMin(float t[]) {
    float temp_min = t[0];
    for (int i = 1; i < DIAS_SEMANA; i++) {
        if (t[i] < temp_min) {
            temp_min = t[i];
        }
    }
    return temp_min;
}

void mostrarValores(float t[], float tmax, float tmin, float promedio) {
    /* Mostramos las temperaturas que ingreso el usuario.*/
    printf("Las temperaturas ingresadas son: ");
    for (int i = 0; i < DIAS_SEMANA; i++) {
        printf("\nTemperatura numero %d: %f\n", i + 1, t[i]);
    }

    /* Mostramos la temperatura maxima.*/
    printf("\nLa temperatura maxima es: %f", tmax);
    /* Mostramos la temperatura minima.*/
    printf("\nLa temperatura minima es: %f", tmin);
    /* Mostramos el promedio.*/
    printf("\nEl promedio es: %f\n", promedio);
}
