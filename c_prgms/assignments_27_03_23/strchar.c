#include<stdio.h>
int mystrchr(char s[],char c)
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c)
			return i;
	}
	return -1;
}
int main()
{
	char c,s[100];
	printf("enter the string:\n");
	scanf("%[^\n]s",s);
	printf("enter the character to search:\n");
	getchar();	
	scanf("%c",&c);
	int a=mystrchr(s,c);
	if(a!=-1)
		printf("Fst Occurence in the string:%d\n",a);
	else
		printf("there is no character in the string.\n");
}
