#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    int targetIndex, indexA, indexB;
    int targetSize = hi - lo;
    int target[targetSize];
    
    for ( indexA = lo, indexB = mid, targetIndex = 0; indexA < mid && indexB < hi; targetIndex++ ) {
        if ( array[indexA] <= array[indexB] ) {
            target[targetIndex] = array[indexA];
            indexA += 1;
        } else {
            target[targetIndex] = array[indexB];
            indexB += 1;
        }
    }
    for ( ; indexA < mid; targetIndex++ ) {
        target[targetIndex] = array[indexA];
        indexA += 1;
    }
    for ( ; indexB < hi; targetIndex++ ) {
        target[targetIndex] = array[indexB];
        indexB += 1;
    }
    for ( int i = 0, j = lo; i < targetSize; i++, j++ ) {
        array[j] = target[i];
    }
}

int main() {
    int array[] = {0,1,2,3,4,7,7,8,10, 11, 12, 12,2,3,4,4,6,9};
    int lo = 0;
    int mid = 12;
    int hi = 18;
    //int array[] = {2,3,4,4,6,9,0,1,2,3,4,7,7,8,10, 11, 12, 12};
    int len1 = 18;
	int last = 17;

    
	
	
	for (int i = 0; i < len1-1; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[len1-1]);
	
	
	merge(array, lo, mid, hi);
	
	printf("\n");
	for (int i = 0; i < last; i++) {
    	printf("%d ", array[i]);
    	}
        printf("%d\n", array[last]);


    return 0;
}
