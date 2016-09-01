#include <stdio.h>

int arrayMin(int array[], int size) {
    int min = array[0];
    
    for ( int count = size - 1; count > 0; count-- ) {
        if ( array[count] < min ) {
            min = array[count];
        }
    }
    return min;
}

int main() {
    int array[] = {-2, 1, -9, -8, -2};
	int last = 4;
    int size = 5;

    for (int i = 0; i < last; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[last]);
        
    printf("%d\n", arrayMin(array, size));


    return 0;
}
