//Aidan Esposito / Juan Ballesteros

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function that uses binary and remainder variables to convert the enter decimal number
//to a 32 bit binary number.
void DecimalToBinary(int decimal){  //Sets original decimal number to 0
    if(decimal == 0){
        printf("00000000000000000000000000000000");
        return;
    }
    //checks if decimal number entered is in 32 bit range
    if(decimal < 0 || decimal > 4294967296){
        printf("numbers entered are not acceptable with a 32 bit binary number");
        return;
    }

    char binary[32] = {"00000000000000000000000000000000"}; //account for 32 bits

    for(int i = 31; i >= 0; i--){ //converts decimal number to binary number
        if(decimal % 2){
            binary[i] = '1';
        }
        decimal = decimal /2;
    }
    printf("%s\n", binary);
}

//Used to handle entered number by user and print the resulting binary number.
int main() {

    int enteredDecimalNumber; //checks for entered decimal number in arguments

    printf("Please enter a decimal number to be converted to binary");
    scanf( "%d", &enteredDecimalNumber);
    DecimalToBinary(enteredDecimalNumber);
    return 0;
}



