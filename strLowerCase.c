#include <stdio.h>

#define MAXLENGHT 100

void strLowerCase(char str[]){
    for ( int i = 0, lower = str[i]; lower != 0; i++ ) {
    	lower = str[i];
        if ( lower > 64 && lower < 91 ) {
            lower += 32;
            str[i] = lower;
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    char arraya[MAXLENGHT];
    char arrayb[MAXLENGHT];
    
    fscanf(in, "%s", arraya);
    fclose(in);
    
    
    
    for ( int i = 0; arraya[i] != 0; i++) {
    	printf("%c", arraya[i]);
    }
    strLowerCase(arraya);
    
    printf("\n");
    for ( int i = 0; arraya[i] != 0; i++) {
    	printf("%c", arraya[i]);
    }


    return 0;
}
