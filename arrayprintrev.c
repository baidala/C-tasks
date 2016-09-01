#include <stdio.h>

void arrayPrintReversed(int array[], int size) {
	for (int i = size-1; i > 0; i--) {
	     printf("%d ", array[i]);
	}
	printf("%d\n", array[0]);

}

int main() {
    int array[] = {1, 2, 3, 4, 5};

    arrayPrintReversed(array, 5);

    return 0;
}
