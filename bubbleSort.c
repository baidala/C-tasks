#include <stdio.h>

void bubbleSort(int array[], int size) {
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



    return 0;
}
