//1. Viet ham tinh S = x^y
#include <stdio.h>
#include <math.h>

float exponential(int x, int y) {
	if(y == 0) {
		return 1;	
	} else if(y > 0) {
		float exp = 1;
		for(int i = 1; i <= y; i++) {
			exp *= x;	
		}
		return exp;
	} else {
		float exp = 1;
		for(int i = 1; i <= abs(y); i++) {
			exp *= x;	
		} 
		return 1 / exp;	
	}
}

int main() {
	int x, y;
	printf("Enter x, y : \n");
	scanf("%d%d", &x, &y);
	printf("%d ^ %d = %f", x, y, exponential(x, y));
	return 0;
}
