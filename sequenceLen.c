//1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10 1
#include <stdio.h>

int main() {
    int x, len;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( len = 0; len < 100 && fscanf(in, "%d", &x) == 1; len++ ) {
    	printf("%d\n", len);
    }
    printf("%d\n", len);
    fprintf(out, "%d\n", len);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
