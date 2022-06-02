//3. Nhap vao mang 10 chuoi tu ban phim va in ra danh sach nay
#include <stdio.h>
#include <string.h>

int main() {
	char str[10][100];
	printf("Enter 10 strings : \n");
	for(int i = 0; i < 10; i++) {
		printf("String number %d : ", i + 1);
		scanf("%s", str[i]);
	}
	printf("10 strings entered : \n");
	for(int i = 0; i < 10; i++) {
		printf("%s\n", str[i]);
	}
	return 0;
}
