#include<stdio.h>

int main() {
	int n;
	printf("Enter the size of array : n = ");
	scanf("%d", &n);
	int ary[n];
	printf("Enter elements of array : \n");
	
	for(int i = 0; i < n; i++) {
		printf("ary[%d] = ", i);
		scanf("%d", &ary[i]);
	}
	int odd = 0;
	for(int i = 0; i < n; i++) {
		if(ary[i] %2 != 0) {
			odd = ary[i];
		}
	}
	if(odd != 0) {
		printf("The last odd number is %d", odd);
	} else {
		printf("There are no odd numbers");
	}
	return 0;
}
