#include <stdio.h>

int main() {
	int n;
	printf("Enter array size : \n");
	do {
		printf("n = ");
		scanf("%d", &n);
	} while(n <= 0);
	int arr[n];
	for(int i = 0; i < n; i++) {
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
		//Sap xep cac phan tu vau nhap
		for(int j = 0; j < i; j++) {
			for(int k = 0; k < i - j; k++) {
				if(arr[k] > arr[k+1]) {
					int temp = arr[k];
					arr[k] = arr[k+1];
					arr[k+1] = temp;
				}
			}
		}
		printf("\nAfter sorting : \n");
		for(int j = 0; j <= i; j++) {
			printf("%d\t", arr[j]);
		}	
	}
	return 0;
}
