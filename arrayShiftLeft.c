#include <stdio.h>

void arrayShiftLeft(int array[], int size) {
    int temp = array[0];
    printf("%d\n", temp);
    
    
    for ( int count = 1; count < size; count++ ) {
        array[count-1] = array[count];
        printf("%d\n", count);
    }
    array[size-1] = temp;
}



int main() {
    int array1[] = {-2, 1, -9, -8, -2};
	int last = 4;
    int size = 5;

    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);
    
    arrayShiftLeft(array1, size);  
      
    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);


    return 0;
}
