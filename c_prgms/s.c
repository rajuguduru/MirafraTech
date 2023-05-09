#include <stdio.h>
extern int *add_ptr;
void print_result(int x, int y, int (*func_ptr)(int, int));
int main() 
{
    int x = 5, y = 10;
    printf("x = %d, y = %d\n", x, y);
    print_result(x, y, add_ptr);
    return 0;
}

