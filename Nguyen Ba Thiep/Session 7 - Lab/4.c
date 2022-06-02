//4. Ham tim boi chung nho nhat cua tat ca cac phan tu trong mang
int minComMult(int n, int arr[]) {
	int max = abs(arr[0]);
	for(int i = 1; i < n; i++) {
		if(abs(arr[i]) > max) {
			max = abs(arr[i]);
		}
	} 
	for(int i = max; ;i++) {
		int count = 0;
		for(int j = 0; j < n; j++) {
			if(i % arr[j] == 0) {
				count++;
			}
		}
		if(count == n) {
			return i;
		}
		
	}
}

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);
	int arr[n];
	enterArray(n, arr);
	printf("Min prime number = %d\n", minPrimeNum(n, arr));
	printf("Max common division = %d\n", maxComDiv(n, arr));
	printf("Min common multiple = %d\n", minComMult(n, arr));
	return 0;
}

