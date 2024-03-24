#include <stdio.h>
#include <string.h>

int palindrome(char s[],int j)
{
	int i=0;
 	for(;i<=j;i++,j--)
 	{
         	if(s[i]!=s[j])
         	return 0 ;
 	}
	return 1;
}



int main()
{

	char s[30]="abba";
		
	int i=0,j=0;
	
	for(i=0;s[i]!=0;i++);
		j=i-1;
	j=palindrome(s,j);
	if(j==0)
		printf("It is not a palindrome\n");
	else
		printf("It is a palindrome\n");

}

