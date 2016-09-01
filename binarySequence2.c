#include <stdio.h>

int lenScan(FILE *in) {
    int size = 0;
    
    for ( int num; fscanf(in, "%1d", &num) == 1; size++ );
    rewind(in);
    
    return size;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "a");
    int num; 
    int counter = 0;
    int len = lenScan(in);
    int array[len];

	printf("size = %d\n", len);
    for ( int i = 0; fscanf(in, "%1d", &num) == 1; i++ ) {
    	array[i] = num;
    }
    fclose(in);
    
    for ( int i = 0, j = len - 1; i < j ; ) {
    	if ( array[i] == 1 ) {
    		printf("i = %d\n", i);
    		for ( ; array[j] == 1 && j > i; j--); 
    		printf("j = %d\n", j);
    		if ( array[i] > array[j] ){
    				counter += 1;
    				i += 1;
    				j -= 1;
    		}	 
    		
    	} else {
    		i += 1;
    	}
    }
	printf("counter = %d\n", counter);
	fprintf(out, "%d\n", counter);

    return 0;
    
}
