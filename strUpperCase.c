#include <stdio.h>

#define MAXLENGHT 100
                      
void strUpperCase(char str[]) {
    for ( int i = 0, upper = str[i]; upper != 0; i++ ) {
    	upper = str[i];
        if ( upper > 96 && upper < 123 ) {
            upper -= 32;
            str[i] = upper;
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
    strUpperCase(arraya);
    printf("\n");
    for ( int i = 0; arraya[i] != 0; i++) {
    	printf("%c", arraya[i]);
    	}


    return 0;
}
