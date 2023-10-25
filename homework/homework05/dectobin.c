 //Aidan Esposito / Juan Ballesteros

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

//function that uses binary and remainder variables to convert the enter decimal number
//to a 32 bit binary number.
void DecimalToBinary(int decimal){  //Accounts if entered number is 0 or 1.
    if(decimal == 0){
        printf("0x0");
        return;
    }

    int binary[32]; //account for 32 bits
    int remainder = 0;

    while(decimal > 0){
        decimal = decimal /2;
        binary[remainder] = decimal % 2;
        remainder ++;
    }

    for(int i = remainder -1; i >= 0; i--){
        printf("%d\n", binary[i]);
    }

}

//Used to handle entered number by user and print the resulting binary number.
int main() {

    int enteredDecimalNumber;

    printf("Please enter a decimal number to be converted to binary");
    scanf( "%d", &enteredDecimalNumber);
    DecimalToBinary(enteredDecimalNumber);
    return 0;
}



