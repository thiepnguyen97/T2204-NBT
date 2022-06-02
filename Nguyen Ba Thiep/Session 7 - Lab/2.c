//2. Ham tim so nguyen to nho nhat lon hon moi gia tri trong mang
int minPrimeNum(int n, int arr[]) {
	int max = maxArray(n, arr);
	if(max <= 0) {
		return 1;
	} else {
		for(int i = max + 1; ;i++) {
			int count = 0;
			for(int j = 1; j <= i; j++) {
				if(i % j == 0) {
					count++;
				}
			}
			if(count == 2) {
				return i;
			}
		}
	}
}
