#include <stdio.h>

#define SIZE 2

void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int col = 0; col < size; col++ ) {
        for ( int row = 0; row < size; row++ ) {
            int index = size - 1 - col;
            
            target[row][index] = source[col][row];
        }
    }
}

void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int col = 0; col < size; col++ ) {
        for ( int row = 0; row < size; row++ ) {
            int index = size - 1 - col;
            
            target[index][row] = source[row][col];
        }
    }
}

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int col = 0; col < size; col++ ) {
        for ( int row = 0; row < size; row++ ) {
            int targetCol = size - 1 - col;
            int targetRow = size - 1 - row;
            
            target[targetCol][targetRow] = source[col][row];
        }
    }
}


void matrixPrint( int matrix[SIZE][SIZE], int size) {
    for ( int last = size - 1, row = 0, col = 0; row < size; row++ ) {
        for ( col = 0; col < last; col++ ) {
            printf("%d ", matrix[row][col]);
        }
        printf("%d\n", matrix[row][col]);
    }
}


int main() {
    int source[SIZE][SIZE] = { {1, 2}, {3, 4} };
    int target[SIZE][SIZE];
	
	matrixPrint(source, 2);
	matrixRotate180(target, source, 2);
	printf("\n");
    matrixPrint(target, 2);

    return 0;
}
