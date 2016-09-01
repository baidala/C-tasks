#include <stdio.h>

void arraySort(int array[], int size) {
    for ( int issorted = 0; !issorted; ) {
        issorted = 1;
        for ( int count = 1; count < size; count++ ) {
            if ( array[count-1] > array[count] ) {
                int temp = array[count-1];
                
                array[count-1] = array[count];
                array[count] = temp;
                issorted = 0;
            }
        }
    }
}


int main() {
    int array1[] = {-2, 1, -9, -8, -2};
	int last = 4;
    int size = 5;

    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);
    
    arraySort(array1, size);  
      
    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);


    return 0;
}
