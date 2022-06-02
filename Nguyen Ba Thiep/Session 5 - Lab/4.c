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
	int x = 0;
	for(int i = 0; i < n; i++) {
		if(abs(arr[i]) > x) {
			x = abs(arr[i]);
		}
	}
	printf("Array elements are in range [%d, %d]", -x, x);
	return 0;
}
