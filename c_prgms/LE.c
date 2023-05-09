#include<stdio.h>

int main()
{
	int x=0x12345678;
	char *p=(char *)&x;
	
	if(*p==0x78)
	{
		printf("Le=%x\n",*p);
	}
	else
		printf("Be=%d\n",*p);
}
/*#include <stdio.h>
int main ()
{
  unsigned int x = 0x76543210;
  char *c = (char*) &x;
 
  printf ("*c is: 0x%x\n", *c);
  if (*c == 0x10)
  {
    printf ("Underlying architecture is little endian. \n");
  }
  else
  {
     printf ("Underlying architecture is big endian. \n");
  }
 
  return 0;
}*/
