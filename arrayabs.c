#include <stdio.h>

void arrayAbs(int array[], int size) {
    for (int i = 0; i < size; i++) {
    	if (array[i] < 0) {
    		array[i] *= -1;
    		}
    	}
}

int main() {
    int array[] = {-2, 1, -9, -8, -2};
    int last = 4;
    int size = 5;
    
    for (int i = 0; i < last; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[last]);
        
    arrayAbs(array, size);
    
    for (int i = 0; i < last; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[last]);

    return 0;
}
