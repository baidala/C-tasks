#include <stdio.h>

int decrypt(int keyA, int keyB, int n) {
    if (keyA == 0) {return keyB;}
    return (n - keyB) / keyA;
}

int main() {
    int keyA, keyB, plain1, plain2, encrypted1, encrypted2, length, number;
    
    scanf("%d %d\n%d %d\n%d", &plain1, &encrypted1, &plain2, &encrypted2, &length);
    
    if ( plain1 == 0 ) {
        keyB = encrypted1;
        keyA = (encrypted2 - keyB) / plain2;
    } else if ( plain2 == 0 ) {
        keyB = encrypted2;
        keyA = (encrypted1 - keyB) / plain1;
    } else {
        keyA = (encrypted2 - encrypted1) / (plain2 - plain1);
        keyB = encrypted1 - plain1 * keyA;
       
        
    }
    printf("keyA %d  keyB %d\n", keyA, keyB);
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &number);
        printf("%d ", decrypt(keyA, keyB, number));
    }
    scanf("%d", &number);
    printf("%d\n", decrypt(keyA, keyB, number));
    
    return 0;
}
