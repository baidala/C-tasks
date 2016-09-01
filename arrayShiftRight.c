#include <stdio.h>

void arrayShiftRight(int array[], int size) {
    int temp = array[size - 1];
    for ( int count = size - 1; count > 0; count-- ) {
        array[count] = array[count-1];        
    }
    array[0] = temp;
    
}

int main() {
    int array1[] = {-2, 1, -9, -8, -2};
	int last = 4;
    int size = 5;

    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);
    
    arrayShiftRight(array1, size);  
      
    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);


    return 0;
}
