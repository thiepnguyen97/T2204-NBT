#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Enter array size : \n");
	do {
		printf("n = ");
		scanf("%d", &n);
	} while(n <= 0);
	int arr[n];
	printf("Enter array elements : \n");
	for(int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	int x;
	printf("Enter x = ");
	scanf("%d", &x);
	int maxOffset = 0;
	for(int i = 0; i < n; i++) {
		if(abs(arr[i] - x) > maxOffset) {
			maxOffset = abs(arr[i] - x);
		}
	}
	for(int i = 0; i < n; i++) {
		if(abs(arr[i] - x) == maxOffset) {
			printf("\nThe furthest value from x is a[%d] = %d", i, arr[i]);
			printf("\nand its distance form x is %d", abs(arr[i] - x));	
		}
	}

	return 0;
}
