//4. Nhap vao 1 chuoi va dao nguoc chuoi vua nhap
#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	printf("Enter string : ");
	scanf("%s", s);
	char temp[100];
	for(int i = 0; i < strlen(s); i++) {
		temp[i] = s[strlen(s) - 1 - i];
	}
	strcpy(s, temp);
	printf("%s", s);
	return 0;
}

