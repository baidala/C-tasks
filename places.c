// Считать с клавиатуры целое число.
// Вывести на экран количество знакомест, нужных для вывода этого числа.

#include <stdio.h>

#define INTEGER 12

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != '\0'; len++ );
    return len;
}

int main() {
    char array[INTEGER];
    //char x;
    //int len;
    
    scanf("%s", array);
    
    printf("%d\n", strLen(array));
    //scanf("%s", array);
    
    //for ( len = 0; scanf("%c", &x) == 1; len++ );
    //printf("%c\n", array[0]);
    
    


    return 0;
}
