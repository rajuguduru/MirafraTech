#include<stdio.h>
#include<stdlib.h>
int main()
{

int *p=(int *)malloc(3*4);
free(p);
free(p);
}
