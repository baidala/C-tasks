#include <stdio.h>

int arraySearch(int array[], int size, int needle) {
    for ( int count = size - 1; count > -1; count-- ) {
        if ( array[count] == needle ) {
            return count;
        }
    }
    return -1;
}


int main() {
    int x, len, needle;
    int last = 99;
    int array[100];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    
    fscanf(in, "%d", &needle);
    printf("%d\n", needle);    
    
    for ( len = 0; len < 100 && fscanf(in, "%d", &array[len]) == 1; len++ ) {
    	printf("%d\n", len);
    }
    
    for (int i = 0; i < len-1; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[len-1]);
    
    //printf("%d\n", arraySearch(array, len, needle));
    
    fprintf(out, "%d\n", arraySearch(array, len, needle));
    
    fclose(in);
    fclose(out);

    return 0;
}
