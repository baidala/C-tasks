#include <stdio.h>

int main() {
    FILE *in1 = fopen("task.in", "r");
    FILE *in2 = fopen("task.in", "r");
    FILE *out = fopen("task.out", "a");
    int num;
    int counter = 0;
    int len = 0;
    int zeroCount = 0;
    
    for ( ; fscanf(in1, "%1d", &num) == 1; len++ ) {
        if ( num == 0 ) {
            zeroCount += 1;
        }
    }
    fclose(in1);
    
    for ( int i = 0; fscanf(in2, "%1d", &num) == 1 && i < zeroCount; i++ ) {
        if ( num == 1 ) {
            counter += 1;
        }
    }
    fclose(in2);
    printf("%d\n", counter);
    
    fprintf(out, "%d\n", counter);
    fclose(out);
    
    return 0;
}
