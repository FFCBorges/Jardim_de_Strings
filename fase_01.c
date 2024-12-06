#include "fase_01.h"
#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 10
#define MAX_STRING_LENGTH 1000


// cria a matriz
StringMatrix* createMatrix() {
    StringMatrix *matrix = (StringMatrix *)malloc(sizeof(StringMatrix));
    if (!matrix) {
        perror("Erro ao alocar memória para a matriz");
        exit(EXIT_FAILURE);
    }
    matrix->data = (char **)malloc(INITIAL_CAPACITY * sizeof(char *));
    if (!matrix->data) {
        perror("Erro ao alocar memória para as strings");
        free(matrix);
        exit(EXIT_FAILURE);
    }
    matrix->size = 0;
    matrix->capacity = INITIAL_CAPACITY;
    return matrix;
}

// redimensiona a matriz
void resizeMatrix(StringMatrix *matrix) {
    matrix->capacity *= 2;  // Dobra a capacidade
    matrix->data = (char **)realloc(matrix->data, matrix->capacity * sizeof(char *));
    if (!matrix->data) {
        perror("Erro ao redimensionar a matriz");
        exit(EXIT_FAILURE);
    }
}



// Exemplo de uso
int main_cliente() {
    // Criação da matriz
    StringMatrix *matrix = createMatrix();


    return 0;
}

