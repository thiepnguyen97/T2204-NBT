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
	int sum = 0, cnt = 0;
	for(int i = 0; i < n; i++) {
		if(i % 2 == 0 && ary[i] %2 != 0) {
			sum += ary[i];
			cnt++;
		}
	}
	if(cnt != 0) {
		printf("Average of odd numbers in even positions is : %f", (float) sum / cnt);
	} else {
		printf("There are no odd number in even positions");
	}
	return 0;
}
