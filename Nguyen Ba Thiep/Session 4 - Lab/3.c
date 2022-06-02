#include<stdio.h>

int main() {
	int n;
	printf("Enter the size of array : n = ");
	scanf("%d", &n);
	int ary[n];
	printf("Enter elements of array : \n")
	for(int i = 0; i < n; i++) {
		printf("ary[%d] = ", i);
		scanf("%d", &ary[i]);
	}
	int x;
	printf("Enter x = ");
	scanf("%d", &x);
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		if(ary[i] == x) {
			cnt++;
		}
	}
	if(cnt > 0) {
		printf("There is/are %d x in array", cnt);
	} else { 
		printf("There are no x in array");
	}
	return 0;
}
