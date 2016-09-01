#include <stdio.h>

int main() {
    int age;
    
    scanf("%d", &age);

    if ( age > 0 && age >= 21 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}

