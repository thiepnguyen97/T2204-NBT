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
	int maxLen = 0, maxSum = 0, maxIdx = 0, currLen = 0, currSum = 0, currIdx = 0;
	for (int i = 0; i < n; i++) {
		if (ary[i] > 0) {
			currLen++;
			currSum += ary[i];
			if (currLen == 1) {
				currIdx = i;
			}
			if(currSum > maxSum) {
				maxLen = currLen;
				maxSum = currSum;
				maxIdx = currIdx;
			}
		} else {
			currLen = 0;
			currSum = 0;
		}
	}
	if (maxSum > 0) {
		printf("The positive sequence with the greatest sum is: \n");
		for(int i = maxIdx; i < maxIdx + maxLen; i++) {
			printf("%d\t", ary[i]);
		}
		printf("\nSum = %d", maxSum);
		printf("\nStarting point i = %d", maxIdx);
	} else {
		printf("No positive sequence found");
	}
	return 0;
}
