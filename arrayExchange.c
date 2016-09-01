#include <stdio.h>

void arrayExchange(int array[], int len) {
	//if (len % 2 != 0) {len -= 1;}
	for ( int count = 1; count < len; count += 2 ) {
		int temp = array[count];
		array[count] = array[count-1];
		array[count-1] = temp;
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
    
    arrayExchange(array1, size);  
      
    for (int i = 0; i < last; i++) {
    	printf("%d ", array1[i]);
    	}
        printf("%d\n", array1[last]);


    return 0;
}
