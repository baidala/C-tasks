#include <stdio.h>

void printArray(int array[], int size) {
	for (int i = 0; i < size-1; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[size-1]);
}

int arrayUnique(int array[], int size) {
    for ( int i = 0; i < size; ) {
    	printf("* i = %d\n", i);
    	for ( int j = i+1; j < size; ) {
    		printf("** array[%d] = %d\n", j, array[j]);
    		if ( array[i] == array[j]) {
    			printf("** array[%d] == array[%d]  ==>%d\n", i, j, array[j]);
    			for (int k = j+1; k < size; k++) {
    				array[k-1] = array[k];
    				printf("*** array[%d] = %d\n", k-1, array[k-1]);
    			}
    			printArray(array, size);
    			size -= 1;
    			
    		} else {
    			j += 1;
    			}
    		
    	}
    	i += 1;
    	
    }
    
	return size;
}



int main() {
    
	int array[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 5, 4, 3, 2, 1};
    //int array[] = { 1,1,1};
    int size = 25;
	


	for (int i = 0; i < size-1; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[size-1]);
        
    size = arrayUnique(array, size);
	
	
	
	
	for (int i = 0; i < size-1; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[size-1]);
        
	printf("new size = %d\n", size);
	
	

	

    return 0;
}
