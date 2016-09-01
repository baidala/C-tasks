#include <stdio.h>

void arrayReverse(int array[], int size) {
    for ( int count = 0, revers = size - 1; count < revers; count++, revers-- ) {
        int temp = array[count];
        
        array[count] = array[revers];
        array[revers] = temp;
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
    
    arrayReverse(array1, size);  
      
    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);


    return 0;
}
