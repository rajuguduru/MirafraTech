#include <stdio.h>

unsigned int convert_endian(unsigned int n) {
    return ((n & 0xFF000000) >> 24) | ((n & 0x000000FF) << 24) | ((n & 0x00FF0000) >> 8) | ((n & 0x0000FF00) << 8);
}

int main() {
    unsigned int n = 0x12345678; // Example input in little-endian format
    unsigned int result = convert_endian(n);
    printf("Original little-endian value: %08X\n", n);
    printf("Converted big-endian value: %08X\n", result);
    return 0;
}

