#include <stdio.h>

#define LIMIT 11

int arrayScan(FILE *in, int array[], int limit) {
    int len = 0;
    
    for ( ; len < limit && fscanf(in, "%d", &array[len]) == 1; len++ );
    return len;
}



int main() {
    int limit = LIMIT;
    FILE *in = fopen("task.in", "r");
    //FILE *out = fopen("task.out", "w");
    //scanf (limit);
    //fscanf(in, "%d %d", &x, &y);
    int array[limit];
    printf("%d\n", arrayScan(in, array, limit));
        
    fclose(in);
    //fclose(out);

    return 0;


}


