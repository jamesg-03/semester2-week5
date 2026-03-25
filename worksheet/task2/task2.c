/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: James Graham
 * ID: 202028828
 */

#include <stdio.h>
#include <string.h>

// function to convert hexadecimal to decimal
int main(void){
    long decimal = 0;
    char hex[9];
    int i;
    
	// take user input and validate it using 8 bits
    printf("Enter a hexadecimal number: ");
    scanf("%8s", hex); //

	// for loop to map each character
    for (i = 0; hex[i] != '\0'; i++) {
        int val;
        char c = hex[i];

        // converting characters to integers
        if (c >= '0' && c <= '9') {
            val = c - '0';
        } else if (c >= 'a' && c <= 'f') {
            val = c - 'a' + 10;
        } else if (c >= 'A' && c <= 'F') {
            val = c - 'A' + 10;
        } else {
            printf("Error: Invalid Hexadecimal\n");
            return 1;
        }

		// final conversion
        decimal = (decimal * 16) + val;
    }
    
    // print result in decimal
    printf("decimal:%ld\n", decimal);
    
    return 0;
}