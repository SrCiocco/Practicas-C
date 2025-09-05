#include <stdio.h>

#define USD 1200
#define CLP 1.27

float pedirPlata();
float convertirPesoUSD(float pesos);
float convertirPesoCLP(float pesos);

void mostrarDivisas(float pesos, float dolares, float pesos_chilenos);

int main() {
    float pesos = pedirPlata();
    float dolares = convertirPesoUSD(pesos);
    float pesos_chilenos = convertirPesoCLP(pesos);

    mostrarDivisas(pesos, dolares, pesos_chilenos);

    return 0;
}

float convertirPesoUSD(float pesos) {
    float conversion = pesos / USD;
    return conversion;
}

float convertirPesoCLP(float pesos) {
    float conversion = pesos / CLP;
    return conversion;
}

float pedirPlata() {
    printf("Pone la plata: ");
    float plata = 0;
    scanf("%f", &plata);
    return plata;
}

void mostrarDivisas(float pesos, float dolares, float pesos_chilenos) {
    printf("Tenes %f pesos\n", pesos);

    printf("Equivalen a %f dolares\n", dolares);

    printf("Equivalen a %f pesos chilenos\n", pesos_chilenos);
}
