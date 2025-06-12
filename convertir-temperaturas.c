#include <stdio.h>

float pedirTemperatura();
float convertirCelsiusFarenheit(float t);
float convertirFarenheitCelsius(float t);

void mostrarValores(float t, float resultadoF, float resultadoC);

// Convertir ºC a ºF = ºC x 1.8 + 32
// Convertir ºF a ºC = (ºF - 32) / 1.8

int main () {
    float temperatura, resultadoC, resultadoF;
    temperatura = pedirTemperatura();
    resultadoF = convertirCelsiusFarenheit(temperatura);
    resultadoC = convertirFarenheitCelsius(temperatura);
    mostrarValores(temperatura, resultadoC, resultadoF);
    return 0;
}

float pedirTemperatura() {
    float temperatura = 0;
    printf("Introduzca una temperatura: ");
    scanf("%f", &temperatura);

    return temperatura;
}

float convertirFarenheitCelsius(float t) {
    float resultadoF;
    resultadoF = t * 1.8 + 32;
    return resultadoF;
}

float convertirCelsiusFarenheit(float t) {
    float resultadoC;
    resultadoC = (t - 32) / 1.8;
    return resultadoC;
}

void mostrarValores(float t, float resultadoF, float resultadoC) {
    printf("Introduciste la temperatura: %f\n", t);
    printf("Esa temperatura convertida a Farenheit es igual a: %f\n", resultadoF);
    printf("Esa temperatura convertida a Celsius es igual a: %f\n", resultadoC);
}
