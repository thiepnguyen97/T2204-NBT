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
	int flag;
	for(int i = 0; i < n; i++)
		do {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
		flag = 0;
		for(int j = 0; j < i; j++) {
			if(arr[j] == arr[i]) {
				flag = 1;
				break;
			}
		}
		} while (flag == 1);
	printf("Array entered : \n");
	for(int i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}
