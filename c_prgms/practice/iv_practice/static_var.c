#include <stdio.h>

void local_static()

{

static int a;

printf("%d ", a);

a= a + 1;

}

int main()

{

local_static();

local_static();

return 0;

}
