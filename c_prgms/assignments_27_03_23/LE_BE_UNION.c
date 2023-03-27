#include <stdio.h>

union LE {
    int i;
    char c[4];
};

int main() {
    union LE BE;

    BE.i = 0x12345678;

    printf("LE: %x %x %x %x\n",BE.c[0], BE.c[1], BE.c[2], BE.c[3]);

    int i;
    char temp;
    for (i = 0; i < 4/2; i++) {
        temp = BE.c[i];
        BE.c[i] = BE.c[3 - i];
        BE.c[3 - i] = temp;
    }

	  printf("BE: %x %x %x %x\n", BE.c[0], BE.c[1], BE.c[2], BE.c[3]);
    return 0;
}

