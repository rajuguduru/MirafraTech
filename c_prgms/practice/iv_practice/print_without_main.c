#include <stdio.h>

// Define a function pointer type that takes no arguments and returns void
typedef void (*func_ptr)(void);

// Define a function that prints "Hello World"
void print_hello_world() {
    printf("Hello World\n");
}

// Global variable initialization with function call
func_ptr ptr = &print_hello_world;

int main() {
}


