#include <stdio.h>

int bitwise_multiply(int a, int b) {
	int result = 0;
	while (b > 0) 
	{
		if (b & 1) 
		{  // Check if LSB of b is 1
			result += a;
		}
		a <<= 1;  // Left shift a by 1
		b >>= 1;  // Right shift b by 1
	}
	return result;
}

int main() {
	int num1 = 5;
	int num2 = 6;
	printf("Product: %d\n", bitwise_multiply(num1, num2));  // Output: 30
	return 0;
}

