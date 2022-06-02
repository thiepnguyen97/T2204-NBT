//Nhap vao 1 mang 10 chuoi, tim chuoi co do dai lon nhat
#include <stdio.h>
#include <string.h>

int main() {
	char str[10][100];
	printf("Enter 10 strings : \n");
	for(int i = 0; i < 10; i++) {
		printf("String %d : ", i + 1);
		scanf("%s", str[i]);
	}
	int max = strlen(str[0]), index = 0;
	for(int i = 1; i < 10; i++) {
		if(strlen(str[i]) > max) {
			max = strlen(str[i]);
			index = i;
		}
	}
	printf("The longest string is string %d : \n", index + 1);
	printf("%s", str[index]);
	return 0;
}
