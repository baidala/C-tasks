#include <stdio.h>

#define NUMBERLENGHT 201
#define OPERLENGHT 101



int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    double arraynumber[NUMBERLENGHT];
    char arrayoper[OPERLENGHT];
    
    
    for ( int i = 0; fscanf(in, "%d", *arraynumber[i]) == 1; i++ );
    fscanf(in, "%100s", array);
    fclose(in);
    
    
    
    for ( int i = 0; array[i] != 0; i++) {
    	printf("%c", array[i]);
    }
    //strRot13(array);
    
    printf("\n");
    for ( int i = 0; array[i] != 0; i++) {
    	fprintf(out, "%c", array[i]);
    }
    fprintf(out, "\n");
    fclose(out);
    
    for ( int i = 0; array[i] != 0; i++) {
    	printf("%c", array[i]);
    }


    return 0;
}
