#include<stdio.h>
#include<stdlib.h>
//int myatoi(const char *string);
int main()
{
	printf("\n%d\n", atoi("abc122"));
//	getch();
	return(0);
}
/*int myatoi(const char *string)
{
	int i;
	i=0;
	while(*string)
	{
		//i=(i<<3) + (i<<1) + (*string -48);
		i=(i*10)+(*string-48);
		string++;
	}
	return(i);
} */
