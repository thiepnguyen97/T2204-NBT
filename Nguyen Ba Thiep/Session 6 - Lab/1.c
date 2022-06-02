#include <stdio.h>
#include <math.h>

int sumDigits(int n) {
	int sum = 0;
	while(n != 0) {
		int digit = n % 10;
		sum += digit;
		n = n / 10;
	}
	return abs(sum);
}

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);
	printf("Sum digits = %d", sumDigits(n));
	return 0;
}
