//2. Nhap vao 2 chuoi, tim chuoi nao dung truoc trong day alphabet
#include <stdio.h>
#include <string.h>

int main() {
	char s1[100], s2[100];
	printf("Enter string 1 : ");
	scanf("%s", s1);
	printf("Enter string 2 : ");
	scanf("%s", s2);
	if(strcmp(s1, s2) < 0) {
		printf("String 1 is in front of string 2 in alphabet order.");
	} else if (strcmp(s1, s2) > 0) {
		printf("String 2 is in front of string 1 in alphabet order.");
	} else {
		printf("string 1 and 2 are the same.");
	}
	return 0;
}
