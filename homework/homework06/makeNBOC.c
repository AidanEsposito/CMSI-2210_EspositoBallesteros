//Aidan Esposito / Juan Ballesteros

#include <stdio.h>
#include <stdint.h>

//makeNBO function to check byte order and print new number
uint32_t makeNBO(uint32_t num) {
    uint32_t result; //unit to print out 32 bit NBO number
    uint8_t *bytePtr = (uint8_t*)&num; //pointer to compare endians

    if (*bytePtr == 1) { // If the system is little-endian, print byte order
        result = ((num & 0xFF000000) >> 24) |
                 ((num & 0x00FF0000) >> 8) |
                 ((num & 0x0000FF00) << 8) |
                 ((num & 0x000000FF) << 24);
    } else {
        // If the system is big-endian just print number
        result = num;
    }

    return result;
}
