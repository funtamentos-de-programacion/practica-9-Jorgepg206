#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2] = {0};  // Matriz resultante

    int *ptrA, *ptrB, *ptrC;
    ptrA=&A[0][0];
    ptrB=&B[0][0];
    ptrC=&C[0][0];
    
    // Multiplicación de matrices usando punteros
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                //C[i][j]+= A[i][k]*B[k][j] falta representar b
                *(ptrC+i*2+j)+= *  (ptrA+i*2+k) * *(ptrB+k);
                // TODO: Realiza las operaciones solo usando apuntadores
            }
        }
    }
    
    // Mostrar matriz resultante
    for (int i = 0; i < 9; i++) {
        printf("%d\t", *(ptrC + i));
        ((i)%3==2)? printf("\n") : printf(""); 
    }
    
    return 0;
}
