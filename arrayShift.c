#include <stdio.h>

void arrayShift(int array[], int size, int shift) {
    int part;
    
    shift %= size;
    if ( shift < 0 ) {
        shift += size;
    }
    part = size - shift;
    if ( shift < part ) {
        int arrayTemp[shift];
        
        for ( int i = part, j = 0; i < size; i++, j++ ) {
            arrayTemp[j] = array[i];
        }
        for ( int i = size - 1, j = i - shift; i >= shift; i--, j-- ) {
            array[i] = array[j];
        }
        for ( int i = 0; i < shift; i++ ) {
            array[i] = arrayTemp[i];
        }
    } else {
        int arrayTemp[part];
        
        for ( int i = 0; i < part; i++ ) {
            arrayTemp[i] = array[i];
        }
        
        for ( int i = 0, j = part; i < shift; i++, j++ ) {
            array[i] = array[j];
        }
        for ( int i = shift, j = 0; i < size; i++, j++ ) {
            array[i] = arrayTemp[j];
        }
    }
}



int main() {
    int array1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int last = 9;
    int size = 10;

    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);
    
    arrayShift(array1, size, -10529);  
      
    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);
    printf("%d\n", (3%6));

    return 0;
}
