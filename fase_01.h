#ifndef FASE_01_H
#define FASE_01_H

#define INITIAL_CAPACITY 10
#define MAX_STRING_LENGTH 1000

// matriz dinâmica de strings
typedef struct {
    char **data;
    int size;
    int capacity;
} StringMatrix;


StringMatrix* createMatrix();
void resizeMatrix(StringMatrix *matrix);
int main_cliente();

#endif //FASE_01_H
