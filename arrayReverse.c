void arrayReverse(int array[], int size) {
    for ( int count = 0, revers = size - 1; count < revers; count++, revers-- ) {
        int temp = array[count];
        
        array[count] = array[revers];
        array[revers] = temp;
    }
}
