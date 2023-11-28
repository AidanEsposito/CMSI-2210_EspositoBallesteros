//Aidan Esposito / Juan Ballesteros

#include <stdio.h>
#include <stdint.h>

//function that converts number given in argument to NBO format.
uint32_t makeNBO(uint32_t num) { 
    uint32_t result; //final number to be printed after conversion
    uint8_t *bytePtr = (uint8_t*)&num; //pointer to allow for conversion of bits

    if (*bytePtr == 1) { //converting each bits into opposite order if computer is little endian
        result = ((num & 0xFF000000) >> 24) |
                 ((num & 0x00FF0000) >> 8) |
                 ((num & 0x0000FF00) << 8) |
                 ((num & 0x000000FF) << 24);
    } else {
        //if big endian
        result = num;
    }

    return result;
}
