#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <unistd.h> // getpid()

void fill_array(int A[], int size);
void show_array(int A[], int size);

int main () {
    srand(getpid()); // Poblamos la semilla con getpid().
    int arraySize = rand() % 101; // El tamaño del array sera un numero entre 0 y 100.
    int array[arraySize];
    fill_array(array, arraySize);
    show_array(array, arraySize);
    return 0;

}

void fill_array(int A[], int size) {
    for(int i = 0; i <= size; i++) {
        A[i] = i;
    }
}

void show_array(int A[], int size) {
    for(int i = 0; i <= size; i++) {
        if(i != size) {
            printf("%d, ", A[i]);
        }
        else {
            printf("%d\n", A[i]);
        }
    }
}
