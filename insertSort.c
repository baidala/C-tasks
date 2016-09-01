#include <stdio.h>

void insertSort(int array[], int len) {
	for ( int issorted = 0; !issorted; ) {
        issorted = 1;
        for ( int count = 1; count < len; count++ ) {
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



    return 0;
}
