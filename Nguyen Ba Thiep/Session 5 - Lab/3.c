#include <stdio.h>

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
	int min = arr[0], max = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] > max) {
			max = arr[i];
		} else if(arr[i] < min) {
			min = arr[i];
		}
	}
	printf("Array elements are in range [%d, %d]", min, max);
	return 0;
}
