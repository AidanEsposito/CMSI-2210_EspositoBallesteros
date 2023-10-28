//Aidan Esposito / Juan Ballesteros

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function that uses binary and remainder variables to convert the enter decimal number
//to a 32 or 64  bit binary number. Takes in entered decimal value and enter bit number.
void DecimalToHexadecimal(int decimal, int bits){  //Sets original decimal number to 0
    if(decimal == 0){
        printf("00000000000000000000000000000000");
        return;
    }

    //checks if bits are in 32 range and if decimal number is in number range
    if(bits == 32){
        if(decimal < 0 || decimal > 4294967295){
            printf("numbers entered are not acceptable with a 32 bit binary number");
            return;
        }

        //value that keeps track of current hexadecimal number 
        char hexadecimal32[33] = "00000000000000000000000000000000";

        //converts decimal number to hexadecimal 32 bit number.
        for (int i = 31; decimal > 0; i--) {
            int remainder = decimal % 16;
            if (remainder < 10) {
                hexadecimal32[i] = '0' + remainder;
            } else {
                hexadecimal32[i] = 'A' + remainder - 10;
            }
            decimal = decimal / 16;
        }
        printf("%s\n", hexadecimal32);
    //Code to allow for conversion with 64 bits.    
    } else if(bits == 64){
        //checks if in proper number range.
        if(decimal < 0 || decimal > 18446744073709551615ULL ){
            printf("numbers entered are not acceptable with a 64 bit binary number");
            return;
        }

        //variable used for keeping track of hexadecimal number.
        char hexadecimal64[65] = "0000000000000000000000000000000000000000000000000000000000000000";

        //converts decimal to hexadecimal 64 bit number.
        for (int i = 63; decimal > 0; i--){
            int remainder = decimal % 16;
            if (remainder < 10) {
                hexadecimal64[i] = '0' + remainder;
            } else {
                hexadecimal64[i] = 'A' + remainder - 10;
            }
            decimal = decimal / 16;
        }
        printf("%s\n", hexadecimal64);
    } else { //if number entered for bits is not 32 or 64.
        printf("Did not state if number is to be converted with 32 or 64 bits.");
    }
}
    
    
//Used to handle entered number by user and print the resulting binary number.
int main() {

    int enteredDecimalNumber; //checks for entered decimal number in arguments
    int bits; //checks for entered bits in argument.

    printf("Please enter a decimal number to be converted to hexadecimal");
    scanf( "%d", &enteredDecimalNumber);

    printf("Please enter the range of bits for conversion (32 or 64)");
    scanf("%d", &bits);
    DecimalToHexadecimal(enteredDecimalNumber, bits);
    return 0;
}


