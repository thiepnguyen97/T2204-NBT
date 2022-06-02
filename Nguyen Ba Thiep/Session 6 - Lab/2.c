#include <stdio.h>
#include <math.h>

int greatestCommonDivision(int a, int b) {
	int min = abs(a);
	if(abs(b) < min) {
		min = abs(b);
	}
	for(int i = min; i >= 1; i--) {
		if(a % i == 0 && b % i == 0) {
			return i;
		}
	}
}

int main() {
	int x, y;
	printf("Enter x, y : \n");
	scanf("%d%d", &x, &y);
	printf("Greatest common divison = %d", greatestCommonDivision(x, y));
	return 0;
}
