//Aidan Esposito / Juan Ballesteros

#include <stdint.h>

// Function that converts the entered argument into Network Byte Order if necessary.
// Returns the result to determine different bytes.
uint32_t makeNBO(uint32_t num) {
    return ((num >> 24) & 0xFF) | ((num >> 8) & 0xFF00) | ((num << 8) & 0xFF0000) | ((num << 24) & 0xFF000000);
}