#include <stdio.h>

#define SIZE 26
#define UPPERA 64
#define UPPERZ 91
#define LOWERA 96
#define LOWERZ 123
#define SHIFTUP 65
#define SHIFTLO 97

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "a");
    int array[SIZE];
    int index = 0;
    
    for ( index = 0; index < SIZE; index++ ) {
        array[index] = 0;
    }
    
    for ( char letter; fscanf(in, "%c", &letter) != EOF; ) {
        if ( letter > UPPERA && letter < UPPERZ ) {
            index = letter - SHIFTUP;
            array[index] += 1;
        } else if ( letter > LOWERA && letter < LOWERZ ) {
            index = letter - SHIFTLO;
            array[index] += 1;
        }
    }
    fclose(in);
    
    for ( index = 0; index < SIZE; index++ ) {
        if ( array[index] > 0 ) {
            fprintf(out, "%c %d\n", index+SHIFTLO, array[index]);
        }
    }
    
    fclose(out);
    
    return 0;
}
