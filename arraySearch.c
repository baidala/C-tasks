#include <stdio.h>

int arraySearch(int array[], int size, int needle) {
    for (int count = size -1 ;  count > -1; count-- ) {
    	printf("%d\n", array[count]);
    	if ( array[count] == needle ) {
    	return count;
    	} 
    }
    return -1;   	
    
}

int main() {
    int array[] = {-2, 1, -9, -8, -2};
	int last = 4;
    int size = 5;

    for (int i = 0; i < last; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[last]);
        
    printf("%d\n", arraySearch(array, size, 8));


    return 0;
}
