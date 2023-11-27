//Aidan Esposito / Juan Ballesteros 

// main.c

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// Declaration of the makeNBO function
uint32_t makeNBO(uint32_t num);

int main(int argc, char *argv[]) {
    // Checks if arguments are properly given.
    if (argc != 2) {
        printf("Invalid number of arguments (most likely number not given)");
        return 1;
    }

    // Value used to keep track of input given in argument 1.
    uint32_t input_number = atoi(argv[1]);

    // Value used to keep track of the newly created Network Byte Order number.
    uint32_t network_order_number = makeNBO(input_number);

    // Prints the original number and the new Network Byte Order Number.
    printf("Original Input Number: %u\n", input_number);
    printf("Network Byte Order Number: %u\n", network_order_number);

    return 0;
}
