#include<stdio.h>
union test {
	int x;
	char y;
};
int main()
{
	// A union variable t
	union test t;
	t.x = 260;
	printf("x = %d, y = %d\n\n", t.x, t.y);
	t.y = 'A'; // ASCII of 'a' is 97
	printf("x = %d, y = %d\n\n", t.x, t.y);
	return 0;
}
