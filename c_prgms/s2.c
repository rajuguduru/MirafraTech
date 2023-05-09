#include <stdio.h>

static int add(int x, int y) {
	return x + y;
}

int (*add_ptr)(int, int) = &add;

void print_result(int x, int y, int (*func_ptr)(int, int)) {
	int result = (*func_ptr)(x, y);
	printf("Result: %d\n", result);
}

