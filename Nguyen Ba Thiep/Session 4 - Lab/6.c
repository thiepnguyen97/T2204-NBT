#include <stdio.h>

int main ()
{
	int n;
	printf("Enter the size of array : n = ");
	scanf("%d", &n);
	int ary[n];
	printf("Enter elements of array :\n");
	for(int i = 0; i < n; i++) {
		printf("ary[%d] = ", i);
		scanf("%d", &ary[i]);
	}
	int maxLen = 0, maxIdx = 0, currLen = 0, currIdx = 0;
	for(int i = 0; i < n; i++) {
		if(ary[i] > 0) {
			currLen++;
			if(currLen == 1) {
				currIdx = i;
			}
			if(currLen > maxLen) {
				maxLen = currLen;
				maxIdx = currIdx;
			}
		} else {
			currLen = 0;
		}	
	}
	
	if (maxLen > 0) {
		printf("The longest positive sequence has the length of : %d \n", maxLen);
		printf("and the starting point i = %d", maxIdx);
	} else {
		printf("No positive sequence found");
	}
	return 0;
}
