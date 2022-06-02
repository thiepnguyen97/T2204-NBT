//6. Nhap vao 1 mang 10 chuoi, tim chuoi phai dung dau tien trong day alphabet
#include <stdio.h>
#include <string.h>

//Ham tim max do dai 2 string
int maxLen(char s1[], char s2[]) {
	if(strlen(s1) > strlen(s2)) {
		return strlen(s1);
	}
	return strlen(s2);
}

int main() {
	char str[10][100];
	printf("Enter 10 strings : \n");
	for(int i = 0; i < 10; i++) {
		printf("String %d : ", i + 1);
		scanf("%s", str[i]);
	}
	char firstStr[100];
	for(int j = 0; j < strlen(str[0]); j++) {
		firstStr[j] = str[0][j];
	}
	int firstIdx = 0;
	for(int i = 1; i < 10; i++) {
		if(strcmp(str[i], firstStr) < 0) {
			for(int j = 0; j < maxLen(str[i], firstStr); j++) {
				firstStr[j] = str[i][j];
			}
			firstIdx = i;
		}
	}
	printf("The first string in alphabet order is string %d : ", firstIdx + 1);
	printf("%s", firstStr);
}
