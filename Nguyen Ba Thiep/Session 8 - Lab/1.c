//1. Nhap vao 2 chuoi, tim chuoi co do dai lon hon
#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100];
	printf("Enter str1 : ");
	scanf("%s", str1);
	printf("Enter str2 : ");
	scanf("%s", str2);
	if(strlen(str1) > strlen(str2)) {
		printf("String 1 has longer length");
	} else if(strlen(str1) == strlen(str2)) {
		printf("2 strings have the same length");
	} else {
		printf("String 2 has length");
	}
	return 0;
}
