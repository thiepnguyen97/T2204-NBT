#include <stdio.h>
#include <math.h>

int smallestCommonMultiple(int a, int b) {
	int max = abs(a);
	if(abs(b) > max) {
		max = abs(b);
	}
	for(int i = max; ; i++) {
		if(i % a == 0 && i % b == 0) {
			return i;
		}
	}
}

int main() {
	int x, y;
	printf("Enter x, y : \n");
	scanf("%d%d", &x, &y);
	printf("Smallest common multiple = %d", smallestCommonMultiple(x, y));
	return 0;
}
