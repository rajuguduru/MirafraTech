#include<stdlib.h>
#include <stdio.h>
#pragma pack(1)
struct example {
    char a;
    int b;
    char c;
};

int main() {
    printf("Size of struct example: %zu bytes\n", sizeof(struct example));
    return 0;
}

