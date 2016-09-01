#include <stdio.h>

void arrayAbs(int array[], int size) {
    for (int i = 0; i < size; i++) {
    	if (array[i] < 0) {
    		array[i] *= -1;
    		}
    	}
}

int intScan(FILE *in) {
    int number;
    
    fscanf(in, "%d", &number);
    return number;
}

void printArray(int array[], int size) {
	for (int i = 0; i < size-1; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[size-1]);
	}

int main() {
	FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out","w");
    int last;    
    int size = intScan(in);
    int array[size];
    
    for ( int i = 0; i < size; i++ ) {
    	array[i] = intScan(in);
    	}

    printArray(array, size);
    arrayAbs(array, size);
    printArray(array, size);

    last = size -1;    
    for (int i = 0; i < last; i++) {
    	fprintf(out, "%d ", array[i]);
    	}
        fprintf(out, "%d\n", array[last]);
    

    fclose(in);
    fclose(out);

    return 0;
}
