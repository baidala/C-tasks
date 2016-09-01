#include <stdio.h>

#define SIZE 10

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out","w");
    int array[SIZE];
    int x;
    int last = SIZE - 1;

    for ( int i = 0; i < SIZE ; i++ ) {
        fscanf(in, "%d", &array[i]);
         
    }


    for (int i = 0; i < last; i++) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);


    for (; fscanf(out, "%d", &x) == 1; ) {
         
        printf("%d ", x);
    }
    //fscanf(out, "%d", &x)
    printf("\n");



    fclose(in);
    fclose(out);

    return 0;
}

