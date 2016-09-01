#include <stdio.h>

#define MAXPRICE 1000

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int farmerQuantity, price; 
    long long unsigned temp, amountTemp, minPrice, amount;
    int size = MAXPRICE + 1;
    long long unsigned array[size];
    long long unsigned amountNeeded = 0;
    
    fscanf(in, "%d %llu", &farmerQuantity, &amountNeeded);
    
    

    printf("farmerQuantity = %d,\n", farmerQuantity);
    printf("amountNeeded = %p,\n", amountNeeded);
    
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0x00000000;
    }
    for ( ; fscanf(in, "%llu %d", &amount, &price ) != EOF; ) {
        array[price] += amount;
        printf("price %d.\n", price);
        printf("amount %llu.\n", array[price]);
        printf("array[%d] = %llu.\n", price, sizeof(array[price]));
    }
    fclose(in);
    
    printf("#==\n");
    //array[598] = 0x01C9C380;
    //array[598] = 0;
    //amountNeeded = 0;
    printf("amountNeeded = %llu,\n", amountNeeded);
    printf("amountNeeded = %d,\n", sizeof(amountNeeded));
    printf("adress amountNeeded = %p,\n", amountNeeded);
    printf("adress array[598] = %p,\n", array[598]);
    printf("array[598] = %llu,\n", array[598]);
    printf("array[598] = %d,\n", sizeof(array[598]));
    if (amountNeeded > array[598]) {
    	printf("!!!!!!!!!!!=>=\n");
    }
    if (amountNeeded < array[598]) {
    	printf("!!!!!!!!!!!=<=\n");
    }
    if (amountNeeded == array[598]) {
    	printf("!!!!!!!!!!!==\n");
    }
    printf("\n");
    
    
     printf("#==\n");
     //long long unsigned temp1 = 300000000LL;
     unsigned long long temp1 = 0xffffffffffffffff;
     printf("temp1 = %llu,\n", temp1);
     int temp2 = 1000;
     long long unsigned temp4 = (unsigned long long)temp2;
     printf("temp4 = %llu,\n", temp4);
     //1111101000
//10001111000011010001100000000
//100010111011001011001001011100000000000
     
     long long unsigned temp3 = (long long unsigned)temp1 * temp2;
     printf("temp3 = %llu,\n", temp3);
     long long unsigned temp5 = temp1 * temp2;
     printf("temp2 = %d,\n", sizeof(int));
     printf("#==\n");
    
    //amountNeeded = 0xffffffffffffffff;
    //array[598] = 0xffffffffffffffff;
    printf("amountNeeded = %llu,\n", amountNeeded);
    printf("amountNeeded = %d,\n", sizeof(amountNeeded));
    printf("array[598] = %llu,\n", array[598]);
    printf("array[598] = %d,\n", sizeof(array[598]));
    if (amountNeeded == array[598]) {
    	printf("!!!!!!!!!!!==\n");
    }
    
    printf("\n");
    
    amountTemp = 0;
    minPrice = 0;
    
    printf("minPrice = %llu,\n", minPrice);
    printf("minPrice = %p,\n", minPrice);
    printf("minPrice = %d,\n", sizeof(minPrice));
    
    for( int i = 1; amountTemp < amountNeeded && i < size; i++ ) {
        temp = array[i];
         
        if ( temp > 0 && temp >= amountNeeded ) {
            temp = amountNeeded - amountTemp;
            amountTemp += temp;
            minPrice += temp * i;
            printf("i = %d, temp = %p,\n", i,temp);
            printf("amountTemp = %llu,\n", amountTemp);
            printf("minPrice = %llu,\n", minPrice);            
            printf("minPrice = %p,\n", minPrice);            
            
        } else if ( temp > 0 && temp < amountNeeded ) {
             	printf("temp = %llu,\n", temp);
            minPrice += temp * i;
            printf("amountTemp = %llu,\n", amountTemp);
            amountTemp += temp;
            printf("amountTemp = %llu,\n", amountTemp);
            printf("array[%d] = %llu,\n", i, temp);
            printf("minPrice = %llu,\n", minPrice);
            printf("\n");
        }  
    }
    //42D4EAD00
    // 2D4EAD00
    if( amountTemp < amountNeeded ) {
        fprintf(out, "0\n");
    	printf("<==amountTemp = %llu, minPrice = %llu, 0\n", amountTemp, minPrice);
    } else {
        fprintf(out, "%llu\n", minPrice);
        printf("==>amountTemp = %llu,\n", amountTemp);
        printf("==>minPrice = %llu\n", minPrice);
    }
    
    fclose(out);

    return 0;
}
