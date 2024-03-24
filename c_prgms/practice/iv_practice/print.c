#include <stdio.h>
 
#define N 25
 
int main(void)
{
    int i = N;
    while (i > 0 && printf("%d\n", i--)) {}
}
