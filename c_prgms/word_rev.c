#include <stdio.h>
#include<string.h>
void word_rev(char *l,char *r)
{
 char t;
 while(l<r)
 {
 t = *l;
 *l++ = *r;
 *r-- = t;
 }
}
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	char *end, *x, *y;

	for(end=str; *end; end++);
	word_rev(str,end-1);
	x = str-1;
	y = str;
	while(x++ < end)
	{
		if(*x == '\0' || *x == ' ')
		{
			word_rev(y,x-1);
			y = x+1;
		}
	}

	printf("%s\n",str);

	return(0);
} 

