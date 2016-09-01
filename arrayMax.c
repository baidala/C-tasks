#include <stdio.h>

int arrayMax(int array[], int size) {
    int max = array[0];
    
    for ( int count = size - 1; count > 0; count-- ) {
        if ( array[count] > max ) {
            max = array[count];
        }
    }
    return max;
}


int main() {
    int array[] = {-2, 1, -9, -8, -2};
	int last = 4;
    int size = 5;

    for (int i = 0; i < last; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[last]);
        
    printf("%d\n", arrayMax(array, size));


    return 0;
}
