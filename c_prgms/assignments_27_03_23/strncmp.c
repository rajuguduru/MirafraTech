#include<stdio.h>
int mystrcmp(char *s,char *d,int n)
{
	int i=0;
	while(i++<n)
	{
		if(*s>*d)
			return 1;
		if(*s<*d)
			return -1;
		s++;
		d++;
	}	
	return 0;
}
int main()
{
	char s[100];
	char d[100];
	int n;
	printf("enter the first string;\n");
	scanf("%[^\n]",s);
	printf("enter the second string:\n");
	scanf(" %[^\n]",d);
	printf("enter the value of n:\n");
	scanf("%d",&n);
	int a=mystrcmp(s,d,n);
	if(a==1)
		printf("string1 is bigger than second(1)\n");
	if(a==-1)
		printf("string2 is bigger than 1st(-1)\n");
	if(a==0)
		printf("Both are same(0)");

}

