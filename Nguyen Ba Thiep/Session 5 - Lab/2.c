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
	int minOffset = abs(arr[0] - x);
	for(int i = 1; i < n; i++) {
		if(abs(arr[i] - x) < minOffset) {
			minOffset = abs(arr[i] - x);
		}
	}
	for(int i = 0; i < n; i++) {
		if(abs(arr[i] - x) == minOffset) {
			printf("\nThe nearest value from x is a[%d] = %d", i, arr[i]);
			printf("\nand its distance from x is %d", minOffset);
		}
	}

	return 0;
}
