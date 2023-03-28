#include<stdio.h>
int mystrcmp(char s[],char d[])
{
	for(int i=0;s[i]!=0||d[i]!=0;i++)
	{
		if(s[i]>d[i])
			return 1;
		if(s[i]<d[i])
			return -1;
	}	
	return 0;
}
int main()
{
	char s[100];
	char d[100];
	printf("enter the first string;\n");
	scanf("%[^\n]",s);
	printf("enter the second string:\n");
	getchar();
	scanf("%[^\n]",d);
	int a=mystrcmp(s,d);
	if(a==1)
		printf("string1 is bigger than second(1)\n");
	if(a==-1)
		printf("string2 is bigger than 1st(-1)\n");
	if(a==0)
		printf("Both are same(0)");

}
