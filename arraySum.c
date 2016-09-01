#include <stdio.h>

int arraySum(int array[], int size) {
    int sum = array[0];
    
    for ( size -= 1; size > 0; sum += array[size], size-- ); 
    
    return sum;
}

int main() {
    int array1[] = {-2, 1, -9, -8, -2};
	int last = 4;
    int size = 5;

    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);
        
    printf("%d\n", arraySum(array1, size));
    


    return 0;
}
