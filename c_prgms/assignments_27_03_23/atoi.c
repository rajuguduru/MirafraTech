#include<stdio.h>
int myatoi(const char *s);
int main()
{
	char s[100];
	printf("enter the string:\n");
	scanf("%[^\n]s",s);
	printf("%d\n", myatoi(s));
	return(0);
}
int myatoi(const char *s)
{
	int i;
	i=0;
	while(*s)
	{
		//i=(i<<3) + (i<<1) + (*s-48);  //1st method
		i=(i*10)+(*s-48); // 2nd method;
		s++;
	}
	return(i);
} 

