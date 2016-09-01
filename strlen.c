#include <stdio.h>

#define SIZE 100

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != '\0'; len++ );
    return len;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char array[SIZE+1];
    
    fscanf(in, "%s", array);
    fclose(in);
    
    fprintf(out, "%d\n", strLen(array));
    fclose(out);
    
    return 0;
}
