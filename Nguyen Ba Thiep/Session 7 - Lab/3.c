//3. Ham tim uoc chung lon nhat cua tat ca cac phan tu trong mang
int maxComDiv(int n, int arr[]) {
	int min = abs(arr[0]);
	for(int i = 1; i < n; i++) {
		if(abs(arr[i]) < min) {
			min = abs(arr[i]);
		}
	}
	for(int i = min; i >= 1; i--) {
		int count = 0;
		for(int j = 0; j < n; j++) {
			if(arr[j] % i == 0) {
				count++;
			}
		}
		if(count == n) {
			return i;
		}
	}
}

