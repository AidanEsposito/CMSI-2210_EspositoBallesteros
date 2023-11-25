//Aidan Esposito / Juan Ballesteros

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


//function that converts entered argument into Network Byte Order if necessary. returns used to determine
//different bytes.
uint32_t makeNBO(uint32_t num){
    return ((num >> 24) & 0xFF) | ((num >> 8) & 0xFF00) | ((num << 8) & 0xFF0000) | ((num << 24) & 0xFF000000);
}


//main that takes in input and prints out Network Byte Order.
int main(int argc, char *argv[]){
    //checks if arguments are properly given.
    if(argc != 2){
        printf("Invalid number of arguments (most likely number not given)");
        return 1;
    }

    //value used to keep track of input given in argument 1.
    uint32_t input_number = atoi(argv[1]);

    //value used to keep track of newly created Network Byte Order number.
    uint32_t network_order_number = makeNBO(input_number);


    //Prints original number and new Network Byte Order Number.
    printf("Original Input Number: %u\n", input_number);
    printf("Network Byte Order Number: %u\n", network_order_number);

    return 0;
}