//Aidan Esposito / Juan Ballesteros 

//Aidan Esposito / Juan Ballesteros 

// To Compile: gcc makeNBOCtest.c makeNBOC.c -o  makeNBOCtest.exe
// To Run: makeNBOCtest.exe

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// declaration of makeNBO
uint32_t makeNBO(uint32_t num);

int main(int argc, char *argv[]) {
    // Checks if arguments are properly when using makeNBOtest.exe
    if (argc != 2) {
        printf("Invalid number of arguments (most likely number not given)");
        return 1;
    }

    // value used to keep track of argument input
    uint32_t input_number;
    sscanf(argv[1], "%u", &input_number);

    // Value used to keep track of NBO number
    uint32_t result = makeNBO(input_number);

    // Prints the original number and the new Network Byte Order Number.
    printf("Original Input Number: %u\n", input_number);
    printf("Network Byte Order Number: %u\n", result);

    return 0;
}