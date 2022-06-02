//Nhap 1 so nguyen duong n, tim so tai vi tri n cua day Fibonacci
#include <stdio.h>

int main() {
	int  n;
	do {
		printf("n = ");
		scanf("%d", &n);	
	} while(n < 0);
	int x0 = 0, x1 = 1, x2;
	if(n == 0) {
		printf("So thu 0 trong day Fibonacci la : %d", x0);
	} else if (n == 1) {
		printf("So thu 1 trong day Fibonacci la : %d", x1);
	} else {
		int i = 2;
		while(i <= n) {
			x2 = x0 + x1;
			x0 = x1;
			x1 = x2;
			i++;
		}
		printf("So thu %d trong day Fibonacci la : %d", n, x2);	
	}
	return 0;
}
