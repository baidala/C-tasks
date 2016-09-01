#include <stdio.h>

#define LOWERA 96
#define LOWERZ 123
#define SHIFT 32

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( char upper; fscanf(in, "%c", &upper) != EOF; ) {
        if ( upper > LOWERA && upper < LOWERZ ) {
            upper -= SHIFT;
        }
        fprintf(out, "%c", upper);
    }
    fprintf(out, "\n");
    fclose(in);
    fclose(out);
    
    return 0;
}
