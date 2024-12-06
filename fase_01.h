//
// Created by jhonn on 06/12/2024.
//

#ifndef FASE_01_H
#define FASE_01_H

#define INITIAL_CAPACITY 10
#define MAX_STRING_LENGTH 1000

// Estrutura para representar a matriz dinâmica de strings
typedef struct {
    char **data;      // Apontador para a matriz de strings
    int size;         // Número de strings armazenadas
    int capacity;     // Capacidade total da matriz
} StringMatrix;


StringMatrix* createMatrix();
void resizeMatrix(StringMatrix *matrix);
int main_cliente();

#endif //FASE_01_H
