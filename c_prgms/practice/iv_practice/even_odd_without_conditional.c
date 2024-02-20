#include <stdio.h>
 
int main()
{
    int n = 6;
    ((n & 1) && printf("odd")) || printf("even");
 
    return 0;
}
