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
	int min = 0;
	for(int i = 0; i <n; i++) {
		if(ary[i] > 0) {
			min = ary[i];
			break;
		}
	}
	for(int i = 0; i < n; i++) {
		if(ary[i] < min && ary[i] > 0) 
			min = ary[i];
		}
	if(min > 0) {
		printf("The smallest positive number is %d", min);
	} else {
		printf(" There is no smallest positive number");
	}
	return 0;
}
