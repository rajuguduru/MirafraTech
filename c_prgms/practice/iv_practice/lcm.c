#include <stdio.h>

int lcm(int a, int b) 
{
	int max = (a > b) ? a : b;
	int lcm = max;
	while (1) 
	{
		if (lcm % a == 0 && lcm % b == 0) 
		{
			return lcm;
		}
		lcm += max;
	}
}

int main() {
	int num1, num2;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	int result = lcm(num1, num2);

	printf("LCM of %d and %d is %d\n", num1, num2, result);

	return 0;
}

