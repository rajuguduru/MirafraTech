#include<stdio.h>

int main()
{
	char c;
	scanf("%c",&c);
	if(((c>=65)&&(c<=90))||((c>=92)&&(c<=122)))
	printf("yes\n");
	else
	printf("not\n");
}
