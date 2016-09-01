#include <stdio.h>

void arrayCopy(int destination[], int source[], int size) {
     for (int i = 0; i < size; i++ ) {
         destination[i] = source[i];
         
     	
     	}
	
}

int main() {
	int array1[] = {-2, 1, -9, -8, -2};
	int array2[5];	
    int last = 4;
    int size = 5;

    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);
    
    arrayCopy(array2, array1, size);  
      
    for (int i = 0; i < last; i++) {
    	printf("%d ", array2[i]);
    	}
        printf("%d\n", array2[last]);    


    return 0;
}
